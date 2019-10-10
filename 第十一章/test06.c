#include<stdio.h>
#include<string.h>

int main(){
	char str[128];
	puts("请输入一个字符串");
	scanf("%s",str);
	char*p=str;
	int i=strlen(str);
	int k;
	printf("%d",i);
	for(k=0;k<i;k++){
	if(*str<'0'||*str>'9'){
		*p++=*str++;
	}
	else
		str++;
	}
	*p='\0';
	puts(p);
	return 0;
}
