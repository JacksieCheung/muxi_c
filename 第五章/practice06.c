#include<stdio.h>
int main(){
	int i;
	int a[5],temp;
	for (i=0;i<5;i++)
		a[4-i]=i+1;
	for (i=0;i<5;i++)
		printf("a[%d]=%d\n",i,a[i]);
	return 0;
}
