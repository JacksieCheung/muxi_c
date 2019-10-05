#include<stdio.h>

int spr_int(int x){
	return x*x;
}

int main(){
	int a=2;
	printf("%d",spr_int(a++));
	printf("%d",a);
	return 0;
}
