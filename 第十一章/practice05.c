#include<stdio.h>

int str_chnum(const char*s){
	int i=0;
	while(*s!='\0'){
		if(*s=='c')
			i++;
		*s++;
	}
return i;
}

int main(){
	char s[128];
	puts("请输入一个字符串");
	scanf("%s",s);
	printf("其中的c有%d个",str_chnum(s));
	return 0;
}
