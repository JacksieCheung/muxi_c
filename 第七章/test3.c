#include<stdio.h>
#define spr(x) ((x)*(x))

int main(){
	int a=2;
	printf("%d",spr(a++));
	return 0;
}
