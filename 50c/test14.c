//数据的交换输出
#include<stdio.h>

int main(){
		int i,n,min,tmp,k;
		while(scanf("%d",&n)&&n!=0){
				int a[n];
				for(i=0;i<n;i++)
						scanf("%d",&a[i]);
				min=a[0];
				for(i=1;i<n;i++){
						if(min>a[i]){
								min=a[i];
								k=i;
						}
				}
				tmp=a[0];
				a[0]=a[k];
				a[k]=tmp;
				for(i=0;i<n;i++)
						printf("%d ",a[i]);
				printf("\n");
		}
		return 0;
}
