#include<stdio.h>

void adjuest_point(int*n){
	if(*n<0)
		*n=0;
	if(*n>100)
		*n=100;
}

int main(){
	int n;
	puts("请输入一个数");
	scanf("%d",&n);
	adjuest_point(&n);
	printf("%d\n",n);
	return 0;
}
