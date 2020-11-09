#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

// 1.负数正常输出
// 2.int 类型溢出输出 -1
// 3.中间遇到非法字符，截断
// 4.开头遇到非法字符输出0(包括"")
// 5.开头遇到n个空格过滤掉,但是再遇到非法字符（包括负号,会返回0）
int change(const char* c){
	int res = 0;
	for (int i=0;c[i]<='9'&&c[i]>='0';i++){
		int tmp = c[i]-'0';
		if (INT_MAX - res*10<tmp){ // 2.解决第二种情况
			res = -1;
			return -1;
		}
		res=res*10+tmp;
	}
	return res;
}

int  MyAtoi(const char* c){
	int flag = 0;
	int res = 0;

	while(*c==' ') c++; // 5.解决第五种情况
	if (*c=='-'){ // 1.解决负数
		flag = 1;
		c++;
	}
	res = change(c); // 3.解决中间截断 4.解决第四种情况

	if (flag&&res>0){
		return res*(-1);
	}
	return res;
}

int main(){
	char* c = "/12";
	printf("%s\n",c);
	printf("%d\n",atoi(c));
	printf("%d\n",MyAtoi(c));
	return 0;
}
