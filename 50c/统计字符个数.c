//统计字符串中每个字符出现个数
//这是通过ASCII表来实现的
#include<stdio.h>

int main(){
		int cnt[128]={0};
		char str[200];
		int i;
		scanf("%s",str);
		for(i=0;str[i]!='\0';i++)
				cnt[str[i]]++;//cnt并不是从0开始存储的，str[i]表示字符，在cnt里自动转换成ASCII表所对应的整型变量。所以如果要求出现最多的字符，就直接遍历然后设第一个为为max（可以为0），再遍历。
		for(i=0;i<128;i++){
				if(cnt[i]!=0)
						printf("%c:%d\n",i,cnt[i]);
		}
				return 0;
}
