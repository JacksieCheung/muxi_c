#include<stdio.h>
#define NUM 5

int test(double a[NUM]){
	static double k;
	int i;
	for(i=0;i<NUM;i++){
		a[i]=k;
	}
}

int main(){
	int i;
	double a[NUM];
	test(a);
	for(i=0;i<NUM;i++)
	       printf("%f\n",a[i]);
return 0;
}
