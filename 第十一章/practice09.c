#include<stdio.h>

char* del_digit(char*str){
	int i=0,k,u;
	char temp,a,b;
	char*p=str;

	while(*p){
		i++;
		*p++;
	}
	p=p-i;
	for(u=0;u<i;u++){
	if((*p+i)>='0'&&(*p+i)<='9'){
	
	for(k=0;k<i-1;k++){
		a=*p+i;
		b=*p+i+1;
		temp=a;
		a=b;
		b=temp;
	}
	}

return p;
}
int main(){
	char a[128];
	char*b;
	puts("请输入一个字符串");
	scanf("%s",a);
	b=del_digit(a);
	printf("%s",b);
	return 0;
}
