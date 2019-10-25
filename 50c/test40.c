//小赌怡情
#include<stdio.h>

struct du{
		int n1;//第一个数字
		int b;//玩家猜0赌小，猜1赌大
		int t;//玩家下的筹码
		int n2;//第二个数字
};

int main(){
		int T,K;//T为初始筹码，K为次数
		int i;
		int sum=T;
		scanf("%d%d",&T,&K);
		struct du DU[K];
		for(i=0;i<K;i++){
			scanf("%d%d%d%d",&DU[i].n1,&DU[i].b,&DU[i].t,&DU[i].n2);
		}
		for(i=0;i<K;i++){
				if(((DU[i].b=1)&&(DU[i].n1<DU[i].n2))||((DU[i].b=0)&&(DU[i].n1>DU[i].n2))){
						sum+=DU[i].t;
						printf("Win %d! Total = %d\n",DU[i].t,sum);
				}
				else{
						if(DU[i].t>sum){
								printf("Not enough tokens. Total = %d\n",sum);
						}
						else{
						sum-=DU[i].t;
						printf("Lose %d. Total = %d\n",DU[i].t,sum);
								}
				}
		}
		if(sum==0)
				printf("Game Over");
		return 0;
}
