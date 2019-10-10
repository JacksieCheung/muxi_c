#include<stdio.h>

char* str_chr(char*s){
	while(*s!='\0'){
		if(*s=='c'){
			return s;
		}
		*s++;
	}
	return NULL;
}

int main(){
	char s[128];
	puts("请输入一个字符串");
	scanf("%s",s);
	printf("其中第一个指向c的指针是%p",str_chr(s));
	return 0;
}
