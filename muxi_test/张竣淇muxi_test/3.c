//完全平方数，用遍历实现
#include<stdio.h>
#include<math.h>

int main(){
		int n=0;//声明一个n用来存储那个整数
		double A,B,a,b;//A和B用来表示n+100，n+268后的值用来判断
		for(n=0;;n++){
				A=sqrt(n+100);
				a=modf(A,&A);//a用来取小数
				B=sqrt(n+268);
				b=modf(B,&B);//b用来取小数
				if(a==0&&b==0){//判断平方数
						printf("%d",n);
						break;
				}
		}
		return 0;
}

