//测试for循环实现动态数组
//越界始终存在风险，还是不要用
#include<stdio.h>

int main(){
		int i,n;
		char a[1][100];
		for(i=0;;i++){
				scanf("%d",&n);
				if(n==0)
						break;
				//scanf("%d",&a[i]); 用scanf会溢出
				fgets(a[i],5,stdin);
		}
		for(n=0;n<i;n++)
				printf("%s",a[n]);
		return 0;
}
