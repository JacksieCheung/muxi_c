#include<stdio.h>

int main(){
	int ch;
	int i=0;
	while((ch=getchar())!=EOF){
		if (ch=='\n')
			i++;
	}

	printf("输入的行数是%d\n",i);
	return 0;
}
