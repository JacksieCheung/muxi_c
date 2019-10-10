#include<stdio.h>
#include<string.h>

int main(){
	char a[128]={"hello"};
	char b[128]={"muxi"};
	strncat(a,b,2);
	printf("%s",a);
	return 0;
}
