//c语言ASCII表转换
#include<stdio.h>

int main(){
		int n,i;
		while(scanf("%d",&n)&&n!=0){
				int a[n];
				for(i=0;i<n;i++)
						scanf("%d",&a[i]);
				for(i=0;i<n;i++)
				printf("%c",(char)a[i]);
		}
		printf("\n");
		return 0;
}
