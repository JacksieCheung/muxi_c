#include<stdio.h>
#include<string.h>

char* del_digit(char*str){
	char*p=str;
	int i=strlen(str);
	int k;
	printf("%d",i);
	for(k=0;k<i;k++){
	if(*p<'0'||*p>'9'){
		*str++=*p++;
	}
	else
		p++;
	}
	*str='\0';
	return str;
}

int main(){
	char a[128];
	puts("请输入一个字符串");
	scanf("%s",a);
	char*s=del_digit(a);
	puts(s);
	return 0;
}
