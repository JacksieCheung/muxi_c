//输入带空格字符串的测试
#include<stdio.h>

int main(){
		char a[3][100];
		for(int i=0;i<3;i++)//a[i]就是行地址
		fgets(a[i],100,stdin);//feget只会提取前99个元素，最后一个留个'\0'
								//如果不够，回车会接受在字符最后(输出不用打\n)，后面用用'\0'来填充
		for(int i=0;i<3;i++)
				printf("%s",a[i]);
		return 0;
}
