//求奇数的乘积(简易版）
#include<stdio.h>

int main(){
		int a[5]={1,5,4,2,9};
		int i,num=1;
		for(i=0;i<5;i++){
				if(a[i]%2!=0)
					num*=a[i];
		}
		printf("%d",num);
		return 0;
}
					
