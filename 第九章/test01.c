#include<stdio.h>

int main(){
	static int a[5];
	int i;
	for (i=0;i<5;i++)
		printf("%d\n",a[i]);
	return 0;
}
