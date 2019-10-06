#include<stdio.h>
#define NUM 128

void put_string(const char a[],int n){
	int i,k;
	for(i=0;i<n;i++){
		for(k=0;k<NUM;k++){
			if (a[k]=='\0')
				break;
			putchar(a[k]);
		}
		printf("\n");
	}
	printf("\n");
}


int main(){
	int n;
	char a[NUM];
	puts("请输入一个字符串");
	scanf("%s",a);
	puts("请输入要输出的次数");
	scanf("%d",&n);
	put_string(a,n);
	return 0;
}

