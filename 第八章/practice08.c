#include<stdio.h>

int gcd(int x,int y){
	int k;
	do{
		if(x>y){
		k=x%y;
		if(k==0)
			return y;
		else{
			if(k>y)
				x=k;
			else{
				x=y;
				y=k;
			}
		}
		}
}while(k!=0);
}


int main(){
	puts("请输入两个数，用辗转相除法求他们最大公约数");
	int x,y;
	scanf("%d%d",&x,&y);
	printf("他们最大公约数是%d\n",gcd(x,y));
	return 0;
}
