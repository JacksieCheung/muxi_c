//多项式求和
//1-1/2+1/3-1/4+1/5-1/6+...
//要求这个多项式前n项和，首先要实现这个多项式。n<1000
#include<stdio.h>

int main(){
		int i=1;
		float sum=0;
		int N,k;
		puts("请输入样例个数");
		scanf("%d",&N);
		int a[N];
		for(i=0;i<N;i++){
				scanf("%d",&a[i]);
		}
		for(k=0;k<N;k++){
		for(i=1;i<a[k]+1;i++){
				if(i%2==0)
					sum=sum-1/(float)i;//浮点数才能除后有小数
				else
					sum=sum+1/(float)i;
				printf("%.2f\n",sum);
		}
		printf("%.2f ",sum);
		}
		return 0;
}

