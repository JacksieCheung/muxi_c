#include<stdio.h>
#include<string.h>

int main(){
	int i=0;
	char*s="{[]}";
	int n=strlen(s);
	printf("%d",n);
	for(i=0;i<n/2;i++){
		if(s[i]==s[n-1-i])//{和}根本不是同一个字符请问你比较啥？
			continue;
		else
			printf("f");
	}
	printf("t");
	return 0;
}
