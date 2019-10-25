//发工资 1元 2元 5元 10元 50元 100元 找最小张数
//一直减最大的那个数，减到不能减为止
#include<stdio.h>

int main(){
		int n;
		int i;
		int count=0;
		while(1){
		scanf("%d",&n);
		if(n==0)
				break;
		int a[n];//建一个数组来存工资
		for(i=0;i<n;i++){
				scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
				while(a[i]>=100){
						a[i]-=100;
						count++;
				}
				while(a[i]>=50){
						a[i]-=50;
						count++;
				}
				while(a[i]>=10){
						a[i]-=10;
						count++;
				}
				while(a[i]>=5){
						a[i]-=5;
						count++;
				}
				while(a[i]>=2){
						a[i]-=2;
						count++;
				}
				while(a[i]>=1){
						a[i]-=1;
						count++;
				}
		}
		printf("%d\n",count);
		}
		return 0;
}	
