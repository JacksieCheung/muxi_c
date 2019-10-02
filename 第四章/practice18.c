#include<stdio.h>
int main(){
	int a,b,c;
	c = 0;
	puts("请输入一个整数");
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		if(a%b==0){
			printf("%d\n",b);
			c++;}
	}
	printf("一共有%d个约数",c);
	return 0;
}
