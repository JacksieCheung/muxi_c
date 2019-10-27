//素数 更快方法用开方实现
#include<stdio.h>
#include<math.h>

int main(){
		int n,i;
		double k;
		scanf("%d",&n);
		k = sqrt(n);
		for(i=2;i<=k;i++){
				if(n%i==0)
						break;
		}
		if(n<=1)
				printf("不是素数");
		else if(n<=k)
				printf("不是素数");
		else
				printf("是素数");
		return 0;
}
