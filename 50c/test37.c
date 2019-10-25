//考试号查询
#include<stdio.h>

struct student{
		int number;
		int testnum;
		int examnum;
};//结构体声明后面也要写分号

int main(){
		int N;
		int M;
		int i,k;
		puts("请输入一个整数以确定样例数");
		scanf("%d",&N);
		struct student stu[N];//结构体类型数组
		//输入学生学号，测试号和考试号
		for(i=0;i<N;i++){
				scanf("%d%d%d",&stu[i].number,&stu[i].testnum,&stu[i].examnum);
		}
		//输入M确定待查询机号的个数
		scanf("%d",&M);
		int num[M];
		for(i=0;i<M;i++){
				scanf("%d",&num[i]);
		}
		//判断输入机号是否对应testnum，如果是则输出学生号和对应考试机号。
		for(i=0;i<N;i++){
				for(k=0;k<M;k++){
						if(stu[i].testnum==num[k])
								printf("%d %d\n",stu[i].number,stu[i].examnum);
				}
		}

		return 0;
}
