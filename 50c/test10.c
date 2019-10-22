//求平均分 难点：数据输入处理
#include<stdio.h>

int main(){
		int n,m,i,k;
		float suma=0,sumb=0;
		scanf("%d%d",&n,&m);
		float a[n][m];
		for(i=0;i<n;i++){//i表示第几个学生，k表示这个学生的第几门课
				for(k=0;k<m;k++){
						scanf("%f",&a[i][k]);
				}
		}
		//n个学生的平均成绩
		for(i=0;i<n;i++){
				for(k=0;k<m;k++){
						suma+=a[i][k];
				}
		suma/=m;
		printf("%.2f ",suma);
		suma=0;
		}
		printf("\n");

		for(k=0;k<m;k++){
				for(i=0;i<n;i++){
						sumb+=a[i][k];
				}
		sumb/=n;
		printf("%.2f ",sumb);
		sumb=0;
		}
		printf("\n");
		return 0;
}
