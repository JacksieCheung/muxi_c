#include<stdio.h>
#include<string.h>

int main(){
	char a[128]={"hello muxi"};
	char b[128]={"adsasdadsasd"};
	strncpy(b,a,2);
	printf("%s\n",b);
	return 0;
}
