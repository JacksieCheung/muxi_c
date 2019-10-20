//switch的解法还需要斟酌，不过觉得应该没有if简单
#include<stdio.h>

int main(){
		int a=0,b=0,n=0,k=0;
		puts("请输入两门课的成绩");
		scanf("%d%d",&a,&b);
		if((a<0||a>100)||(b<0||b>100)){
				printf("it is error");
				return 0;
		}
		if(a>=60&&b>=60)
				printf("it is pass");
		if(a<60||b<60)
				printf("it is not pass");
		return 0;
}
