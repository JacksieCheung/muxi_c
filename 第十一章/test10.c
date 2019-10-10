#include<stdio.h>

int sum(int n){
	int i,b=1,result=0;
	for (i=0;i<=n;i++){
		result+=i;
	}
	return result;
}

int main(){
	int n;
	scanf("%d",&n);
	int b=sum(n);
	printf("%d",b);
	return 0;
}
