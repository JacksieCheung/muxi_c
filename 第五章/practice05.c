#include<stdio.h>
int main(){
	int i,temp;
	int a[5];
	int b[5];
	int c[5];
	puts("请为a数组赋值");
	for (i=0;i<5;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<5;i++)
		c[i] = a[i];
	for (i=0;i<2;i++){
		temp = c[i];
		c[i] = c[4-i];
		c[4-i] = temp;
	}
	for (i=0;i<5;i++)
		b[i] = c[i];
	puts("   a   b");
	puts("____________");
	for (i=0;i<5;i++)
		printf("%4d%4d\n",a[i],b[i]);
	return 0;
}
