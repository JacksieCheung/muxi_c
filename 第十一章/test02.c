#include<stdio.h>

int main(){
	int i,a=0;
	for (i=0;i<=1000000;i++){
		a=a+i;
	}
	printf("%d",a);
	return 0;
}
