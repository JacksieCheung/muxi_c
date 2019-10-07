#include<stdio.h>

void A(int n){
	n++;
}

int main(){
	int n=0;
	A(n);
	printf("%d\n",n);
	return 0;
}
