#include<stdio.h>

int main(){
	int i=0,k;
	char a[128];
	scanf("%s",a);
	char*p=a;
	while (*p){
		i++;
		*p++;
	}
	printf("%d",i);
	p=p-i;
	for(k=0;k<i;k++){
	if(*p>='0'&&*p<='9')
		*p='\0';
	*p++;
	}
	p=p-i;
	printf("%s",p);
	return 0;
}
