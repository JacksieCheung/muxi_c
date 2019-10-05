#include<stdio.h>

int gcd(int x,int y){
	if (y==0)
		return x;
	else
		return gcd(y,x%y);
}

int main(){
	int x,y;
	puts("请输入x和y");
	scanf("%d%d",&x,&y);
	int k = gcd(x,y);
	printf("他们最小公约数是%d",k);
	return 0;
}
