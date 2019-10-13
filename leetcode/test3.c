#include<stdio.h>
#include<stdlib.h>

int reverse(int x){
	int i,n,d;
	char temp;
	char k[3];
	itoa(x,k,3);
	while(*k++){
		n++;
	}
	
	for (i=0;i<n;i++){
		temp=k[i];
		k[i]=k[n-1-i];
		k[n-1-i]=temp;
	}
	d=(int)k[n];
	return d;
}	

int main(){
	int x;
	puts("请输入一个整数");
	scanf("%d",&x);
	x=reverse(x);
	return 0;
}

