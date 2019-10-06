#include<stdio.h>
#define NUM 128

void put_string(const char a[]){
	int n=0,i=0;
	for (i=0;i<NUM;i++){
		if(a[i]=='\0')
			break;
		n++;
	}

	for (i=n-1;i>=0;i--){
		printf("%c",a[i]);
	}
	printf("\n");
	printf("%d",n);
}

int main(){
	char a[NUM];
	puts("请输入一个字符串");
	scanf("%s",a);
	put_string(a);
	return 0;
}
