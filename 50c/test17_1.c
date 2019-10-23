//找第N个素数和第M个素数之间的素数
//大概思路有两种，第一种是把所有素数存储在输出的时候限定
//第二种是找到相应的数段存储
#include<stdio.h>

int main(){
        int M,N,i,n,len=0,count=0;
        int a[10000]={0};
        scanf("%d%d",&M,&N);
        for(i=0;i<10000;i++){//依次进行素数循环
                for(n=2;n<i;n++){
                        if(i%n==0)
                                break;
                }
                if(n!=i)//判断是否完成了完整的循环
                        continue;//不完整则为偶数，跳过
				count++;//计算这是第几个素数
				if((count>=M)&&(count<=N)){//存储素数
                a[len]=i;
                len++;
				}
        }

        for(i=0;i<len;i++){
                printf("%3d ",a[i]);
                if((i%10==0)&&(i!=0))
                        printf("\n");
        }
		printf("\n");
        return 0;
} 
