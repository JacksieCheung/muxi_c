//判断A+B>C因为这一题给出了要输入多少个测试样例，所以可以建一个二维数组做
#include<stdio.h>

int main(){
		int T,i,k;
		scanf("%d",&T);
		int a[T][3];
		for(i=0;i<T;i++){
				for(k=0;k<3;k++){
						scanf("%d",&a[i][k]);
				}
		}
		
		for(i=0;i<T;i++){
				if(a[i][0]+a[i][1]>a[i][2])
						printf("case #%d:ture\n",i+1);
				else
						printf("case #%d:false\n",i+1);
		}
		return 0;
}
