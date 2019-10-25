//判断题，结构体的应用
#include<stdio.h>

struct title{
		int mark;//题目分数
		int right;//题目对错
};

int main(){
		int i,k;
		int N,M;//N表示学生数,M表示题目数量
		scanf("%d%d",&N,&M);
		int stu[N][M];//二维数组表示N个学生，M道作答答案
		int sum[N];//建立数组保存总分，用变量定义数组不能同时进行赋值
		for(i=0;i<N;i++)
		sum[i]=0;
		struct title tit[M];//建立M个题目
		//输入题目分数和题目答案
		for(i=0;i<M;i++){
				scanf("%d",&tit[i].mark);
		}
		for(i=0;i<M;i++){
				scanf("%d",&tit[i].right);
		}
		//输入学生答案
		for(i=0;i<N;i++){
				for(k=0;k<M;k++){
						scanf("%d",&stu[i][k]);
				}
		}
		//判断正误并输出结果
		for(i=0;i<N;i++){
				for(k=0;k<M;k++){
						if(stu[i][k]==tit[k].right)
								sum[i]+=tit[k].mark;
				}
		}
		for(i=0;i<N;i++){
				printf("%d\n",sum[i]);
		}
		return 0;
}
