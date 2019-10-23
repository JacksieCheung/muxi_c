//数素数M和N都是素数且M小于N
#include<stdio.h>

int main(){
		int M,N,i,n,len=0;
		int a[10000]={0};
		scanf("%d%d",&M,&N);
		for(i=M+1;i<N;i++){
				for(n=2;n<i;n++){
						if(i%n==0)
								break;
				}
				if(n!=i)
						continue;
				a[len]=i;
				len++;
		}

		for(i=0;i<len;i++){
				printf("%3d",a[i]);
				if((i%10==0)&&(i!=0))
						printf("\n");
		}
		return 0;
}
