#include<stdio.h>
int main(void)
{
int a;
int b;
int c;
int d;
printf("请输入一个数:");
scanf("%d",&a);
printf("请再输入一个数:");
scanf("%d",&b);
printf("请再再输入一个数");
scanf("%d",&c);
d=a+b+c;
printf("他们三者之和是：%d\n",d);	
return 0;
}
