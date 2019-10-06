#include<stdio.h>
#define NUM 128

int str_char(const char s[]){
	int len;
	char b[1]={"c"};
	for(len=0;len<NUM;len++){
		if(s[len]==b[0]){
			return len;
			break;
		}
	}
		if(s[NUM-1]!=b[0])
			return -1;
}

int main(){
	char s[NUM];
	int k;
	puts("请输入一个字符串");
	scanf("%s",s);
	k=str_char(s);
	printf("%d\n",k);
	return 0;
}
