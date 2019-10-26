//输入一个整数n输出字符串s
#include<stdio.h>

int main(){
		int n;
		int i,count=0;//count用来计算字符串的长度
		char string[128];
		scanf("%d",&n);
		while(n!=0){
				string[count]=(n%10+'0');//int型转换为char型数字字符
				n/=10;//往前移一位 用来遍历
				count++;
		}
		for(i=count-1;i>=0;i--){//反向输出，因为存字符时是反的
				printf("%c",string[i]);
		}
		printf("\n");
		return 0;
}
