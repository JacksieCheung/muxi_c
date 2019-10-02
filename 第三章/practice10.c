#include<stdio.h>
int main(){
	int a,b;
	puts("请输入一个数");
	scanf("%d",&a);
	b = a % 2;
	switch (b){
		case 0:
			printf("该数为偶数\n"); break;
		default :
			printf("该数为奇数\n");
	return 0;
}
}
