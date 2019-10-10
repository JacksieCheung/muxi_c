#include<stdio.h>
#include<ctype.h>

void str_toupper( char*s){
	while(*s){
		*s=toupper(*s);
		*s++;
	}
}

int main(){
	char a[128];
	puts("请输入一个字符串");
	scanf("%s",a);
	str_toupper(a);
	printf("%s",a);
	return 0;
}
