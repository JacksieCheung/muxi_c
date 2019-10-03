#include<stdio.h>
int main(){
	int i,j;
	int a[6][2];

	puts("现在请选择学生后，依次输入语文数学成绩");
	for (i=0;i<6;i++){
		puts("学生编号:");
		scanf("%d",&j);
		puts("请依次输入语文数学成绩：");
		scanf("%d%d",&a[j-1][0],&a[j-1][1]);
	}

	puts("各门课程的总分：");
	double sum1,sum2 = 0;
	for(i=0;i<6;i++)
		sum1 = sum1 + a[i][0];
	printf("语文的总分：%.2f\n",sum1);
	printf("语文成绩平均分:%.2f\n",sum1/6);

	for (i=0;i<6;i++)
		sum2 = sum2 + a[i][1];
	printf("数学的总分:%.2f\n",sum2);
	printf("数学成绩的平均分:%.2f\n",sum2/6);

	puts("每位学生的总分和平均分");
	for(i=0;i<6;i++)
		printf("学生%d 总分%d 平均分%.2d\n",i+1,a[i][0]+a[i][1],(a[i][0]+a[i][1])/2);

	return 0;
}
