//统计字符串里面数字字符出现的次数
#include<stdio.h>
#include<string.h>

int main(){
		int n,i,k;
		int count=0;
		puts("请输入测试案例");
		scanf("%d",&n);
		char a[n][128];
		int c[n];
		for(i=0;i<n;i++){
				scanf("%s",a[i]);
		}
		for(i=0;i<n;i++){
				for(k=0;k<strlen(a[i]);k++){
				if((a[i][k]>='0')&&(a[i][k]<='9'))
						count++;
				}
				c[i]=count;
				count=0;
		}
		for(i=0;i<n;i++)
		printf("%d ",c[i]);
		return 0;
}
