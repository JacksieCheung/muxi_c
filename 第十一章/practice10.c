#include<stdio.h>

void del(char*str){
char*p=str;
while(*p!='\0'){
	if(*p>='0'&&*p<='9')
		p++;
	else
		*str++=*p++;
}
*str='\0';
}

int main(){
	char str[128];
	puts("请输入一个字符串");
	scanf("%s",str);
	puts(str);
	del(str);
	puts(str);
	return 0;
}
