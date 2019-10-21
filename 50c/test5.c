//打印所有100以内的素数（质数）
#include<stdio.h>

int main(){
	int i=0,n=0,x=0,a=0;
	for(i=2;i<=100;i++){
		for(n=2;n<i;n++){
			if(i%n!=0)
				x++;
		}
		if(x==i-2){
				printf("%3d",i);
				a++;
		}
		x=0;//用变量记数记得归0
		if(a==5){
				printf("\n");
				a=0;
		}
	}
	return 0;
}
//素数又称质数，除了1和它自身以外没有别的约数（除这个数除不尽）就是素数
