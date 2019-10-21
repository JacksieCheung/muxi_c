//绝对值排序(简易版)
//绝对值函数abs()，要引用stdlib包 gcc时要加上 -lm不然报错
#include<stdio.h>
#include<stdlib.h>

int main(){
		int i=0,tmp,n;
		int a[5]={-15,6,2,8,0};
		for (i=0;i<5;i++){
			for(n=0;n<4;n++){
				if(abs(a[n])>abs(a[n+1])){
					tmp=a[n];
					a[n]=a[n+1];
					a[n+1]=tmp;
				}
		}
		}
		for (i=0;i<5;i++)
			printf("%d",a[i]);
		return 0;
}
