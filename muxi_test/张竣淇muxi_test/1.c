//阶乘和 输入一个整数n，求1的阶乘到n的阶乘之和
#include<stdio.h>

int jiechen(int n){//用递归函数实现阶乘
		if(n==0)
				return 1;
		else
				return n*jiechen(n-1);
}

int main(){
		int n;
		int i;
		int sum=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++){//遍历一遍再相加
				sum+=jiechen(i);
		}
		printf("%d\n",sum);
		return 0;
}

		
