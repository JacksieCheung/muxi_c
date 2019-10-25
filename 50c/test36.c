//人口普查，输入N确定多少个人，然后输入姓名和出生日期，筛选合法日期后找到最大和最小的人，今天是2014年9月6日
//大概用两个数组，一个存储姓名，一个存储日期
//感觉可以把名字和日期存在结构体里面
#include<stdio.h>
		
int main(){
		int N;
		int i,k;
		int len=0;
		scanf("%d",&N);
		char name[N][128];
		int count[N];
		int date[N][3];//一个二维数组存储年月日
		for(i=0;i<N;i++){
				scanf("%s",name[i]);
				scanf("%d/%d/%d",&date[i][0],&date[i][1],&date[i][2]);
		}
//对日期进行筛选
		for(i=0;i<N;i++){
				if((date[i][0]>1814)&&(date[i][0]<2014)){
						count[len++]=i;//用来存储符合条件的指针，用来限定长度的指针就是len，再进行原地修改
				}
				if(date[i][0]==1814){
						if(date[i][1]>9){
								count[len++]=i;
						}else{
								if((date[i][1]==9)&&(date[i][2]>=6)){
										count[len++]=i;
								}
						}
				}
				if(date[i][0]==2014){
						if(date[i][1]<9){
								count[len++]=i;
						}else{
								if((date[i][1]==9)&&(date[i][2]<=6))
										count[len++]=i;
						}
				}
		}
		for(i=0;i<len;i++){
				date[i][0]=date[count[i]][0];
				date[i][1]=date[count[i]][1];
				date[i][2]=date[count[i]][2];
				for(k=0;k<128;k++){
				name[i][k]=name[count[i]][k];
				}
		}
		for(i=0;i<len;i++)
		printf("%s\n",name[i]);
		//现在开始找日期里面的最大最小
		//最年轻
		int tmpy=date[0][0];
		int tmpm=date[0][1];
		int tmpd=date[0][2];
		char tmpn[128];
		for(i=0;i<128;i++)
		tmpn[i]=name[0][i];
		for(i=1;i<len;i++){
				if(date[i][0]>tmpy){
							tmpy=date[i][0];
							tmpm=date[i][1];
							tmpd=date[i][2];
							for(k=0;k<128;k++)
							tmpn[k]=name[i][k];
				}
						if((date[i][0]==tmpy)&&(date[i][1]>tmpm)){
										tmpy=date[i][0];
										tmpm=date[i][1];
										tmpd=date[i][2];
										for(k=0;k<128;k++)
										tmpn[k]=name[i][k];
						}else	if((date[i][1]==tmpm)&&(date[i][2]>tmpd)){
										tmpy=date[i][0];
										tmpm=date[i][1];
										tmpd=date[i][2];
										for(k=0;k<128;k++)
										tmpn[k]=name[i][k];
								}
						}

		printf("%d %s",len,tmpn);
//最年长
		int tmpy_2=date[0][0];
		int tmpm_2=date[0][1];
		int tmpd_2=date[0][2];
		char tmpn_2[128];
		for(i=0;i<128;i++)
		tmpn_2[i]=name[0][i];
		for(i=1;i<len;i++){
				if(date[i][0]<tmpy_2){
						tmpy_2=date[i][0];
						tmpm_2=date[i][1];
						tmpd_2=date[i][2];
						for(k=0;k<128;k++)
						tmpn_2[k]=name[i][k];
				}
					if((date[i][0]==tmpy_2)&&(date[i][1]<tmpm_2)){
										tmpy_2=date[i][0];
										tmpm_2=date[i][1];
										tmpd_2=date[i][2];
										for(k=0;k<128;k++)
										tmpn_2[k]=name[i][k];
					}
					else	if((date[i][1]==tmpm_2)&&(date[i][2]<tmpd_2)){
										tmpy_2=date[i][0];
										tmpm_2=date[i][1];
										tmpd_2=date[i][2];
										for(k=0;k<128;k++)
										tmpn_2[k]=name[i][k];
								}
						}

		printf(" %s",tmpn_2);
		return 0;
}
