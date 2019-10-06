#include<stdio.h>
#define NUM 128

void put_string(char a[]){
	int i,n=0;
	char temp;
	for(i=0;i<NUM;i++){
		if(a[i]=='\0')
			break;
		n++;
	}
	printf("%d",n);

	if(n%2){
		for (i=0;i<(n-1)/2;i++){
			temp=a[i];
			a[i]=a[n-1-i];
			a[n-i-1]=temp;
		}
	}
	else{
		for (i=0;i<n/2;i++){
			temp=a[i];
			a[i]=a[n-i-1];
			a[n-i-1]=temp;
		}
	}
}


int main(){
	int i;
	char a[NUM];
	puts("请输入一个字符串");
	scanf("%s",a);
	put_string(a);
	printf("这个字符串倒过来是%s\n",a);
	return 0;
}
