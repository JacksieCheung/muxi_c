#include<stdio.h>
#include<string.h>

int main(){
	char a[126]="hello,muxi";
	char*p=a;
	printf("%s\n",a);
	int n=strlen(p);
	printf("%d",n);
	int len=5;
	if(strlen(p)>len)
		printf("hello,world");
	return 0;
}
