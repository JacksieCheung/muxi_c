#include<stdio.h>
#define NUM 128

int str_chnum(const char s[NUM]){
	int i,k=0;
	for (i=0;i<NUM;i++){
		if (s[i]=='c'){
			k++;
		}
	}
	return k;
}


int main(){
	int i;
	char s[NUM];
	puts("请为输入一段字符串");
	scanf("%s",s);
	i=str_chnum(s);
	printf("这段字符串中出现了%d个c\n",i);
	return 0;
}
