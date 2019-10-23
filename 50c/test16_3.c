//测试用scanf("%[^\n]",buf)实现输入带空格字符串
#include<stdio.h>

int main(){
		int i,n;
		char a[100];
		scanf("%[^\n]",a);
		printf("%s\n",a);
		return 0;
}
