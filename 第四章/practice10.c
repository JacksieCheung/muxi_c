#include<stdio.h>
int main(){
	int a;
	do {
		puts("请输入一个正整数");
		scanf("%d",&a);
	 if(a<=0)
		 puts("请输入正整数");
	}while (a<=0);
	printf("%d的逆向结果是",a);
	while(a>0){
		printf("%d",a%10);
		a/=10;
	}
	printf("\n");
	return 0;
}
