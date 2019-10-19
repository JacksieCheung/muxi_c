//测试循环条件的作用域
#include<stdio.h>
//一、局部变量

/*int main(){
		int i=2;
		for (i=0;i<5;i++){
				printf("hello");
		}
		printf("i=%d",i);
		return 0;
}*/
//测试结果 i=5 说明改变局部变量是可以输出到循环外面的。

//二、全局变量

/*int i=2;
int main(){
	for(i=0;i<5;i++){
		printf("hello\n");
	}
printf("i=%d\n",i);	
return 0;
}*/
//测试结果 i=5 说明全剧变量也能被改变

//测试二重循环中上述结果是否成立

int main(){
	int i=2;
	for(int a=0;a<5;a++){
		for(i=0;i<10;i++){
			printf("*");
		}
		printf("\n");
	}
printf("%d\n",i);
return 0;
}
//测试结果 i=10 成立
