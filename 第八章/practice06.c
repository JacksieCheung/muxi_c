#include<stdio.h>

int factorial(int n){
	int i;
	int k=1;
	if(n==0)
		return 1;
	if(n>0){
		for(i=n;i>0;i--)
			 k=k*i;
		return k;
	}
}


int main(){
	int n,k;
	puts("请输入一个数求它的阶乘");
	scanf("%d",&n);
 	k=factorial(n);
	printf("%d\n",k);
	return 0;
}

