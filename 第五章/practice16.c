#include<stdio.h>
int main(){
	int i,j,k;
	int a[2][4][3];
	int sum[1][4][3];

	puts("请依次输入考试成绩");
	for (i=0;i<2;i++){
		printf("第%d次考试\n",i+1);
		for (j=0;j<4;j++){
			printf("学生%d\n",j+1);
			puts("请依次输入三门课成绩");
			for (k=0;k<3;k++){
				scanf("%d",&a[i][j][k]);
			}
		}
	}



		for(j=0;j<4;j++){
			for(k=0;k<3;k++){
				sum[0][j][k] = a[1][j][k]+a[0][j][k];
			}
		}


	puts("总分");
		for(j=0;j<4;j++){
			for(k=0;k<3;k++){
				printf("%4d",sum[0][j][k]);
			}
			printf("\n");
		}

	return 0;
}

