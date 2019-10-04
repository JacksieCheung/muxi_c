#include<stdio.h>

int min(int a,int b, int c){
	int min = a;
	if (b<min)
		min = b;
	if (c<min)
		min = c;
	return min;
}

int main(){
	int a,b,c;
	puts("请输入三个数");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d\n",min(a,b,c));
	return 0;
}
