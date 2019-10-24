//输入n<10个整数，这些整数两两组成两位数再相加
#include<stdio.h>

int main(){
		int i,k,n,sum=0;
		int count=0;
		puts("请输入n确定输入的整数个数");
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++){
				scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
				for(k=0;k<n;k++){
						if(i!=k){//数组访问数老是写错
								sum+=(a[i]*10+a[k]);//数组里面访问数容易写错
								count++;
						}
				}
		}
		printf("%d\n",count);
		printf("%d\n",sum);
		return 0;
}
