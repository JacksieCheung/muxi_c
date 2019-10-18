#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char*p=(char*)malloc(6*sizeof(char));
	memset(p,0,6*sizeof(char));
	printf("%s",p);
	return 0;
}
