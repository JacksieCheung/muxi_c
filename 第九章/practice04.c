#include<stdio.h>

void null_string(char s[]){
	int len = 0;
	while(s[len]){
		s[len]='\0';
		len++;
	}
}

int main(){
	char s[128];
	puts("请输入一个字符串");
	scanf("%s",s);
	null_string(s);
	printf("%s",s);
		return 0;
}
