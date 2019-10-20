#include<stdio.h>

int main(){
	int a=0,b=0,c=0;
	puts("请输入三角形三边长");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c){
			printf("1");
			return 0;
	}
	if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
			printf("2");
	else if(a+b>c&&a+c>b&&b+c>a&&a-b<c&&a-c<b&&b-c<a)
			printf("3");
	else
			printf("0");
	return 0;
}

		
