#include<stdio.h>

int main(){
	char s[128]="(][]{}";

if((s[0]=='('&&s[1]==')')||(s[0]=='['&&s[1]==']')||(s[0]=='{'&&s[1]=='}'))
	printf("hello");
return 0;
}
