#include<stdio.h>

size_t strlen(const char*s){
	size_t len=0;
	while (*s++)
		len++;
	return len;
}

int main(){
	char tmp[128];
	puts("请输入一个字符串");
	scanf("%s",tmp);
	printf("这个字符串长度是%ld",strlen(tmp));
	return 0;
}
