#include<stdio.h>

int chen(int n){
	if(n>0)
		return n*chen(n-1);
	else
		return 1;
}

int combination(int n,int r){
	if(r>0&&r<n&&r!=1)
		return (chen(n)/(chen(r)*chen(n-r)));
	if(r==n||r==0)
		return 1;
	if(r==1)
		return n;
}

int main(){
	int k,n,r;
	puts("请输入n和r");
	scanf("%d%d",&n,&r);
	k=combination(n,r);
	printf("%d\n",k);
	return 0;
}

		
