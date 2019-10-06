#include<stdio.h>
#include<string.h>
#define NUM 3

int main(){
	int i,k;
	char a[NUM][128];
	char b[1][6]={"$$$$$"};
	printf("请输入%d个字符串\n",NUM);
	for (i=0;i<NUM;i++){
		scanf("%s",a[i]);
		if(strcmp(a[i],b[0])==0)
			break;
	}

	for (i=0;i<NUM;i++){
		if(strcmp(a[i],b[0])==0)
			break;
			printf("%s\n",a[i]);
	}
	return 0;
}
