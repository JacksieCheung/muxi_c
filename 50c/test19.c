//计算谱半径
#include<stdio.h>
#include<math.h>

int main(){
		int N;
		int i;
		puts("请输入需要输入特征值的个数");
		scanf("%d",&N);
		float T,F;
		float sum[N];;
		for(i=0;i<N;i++){
				scanf("%f%f",&T,&F);
				sum[i]=sqrt(T*T+F*F);
		}
		T=sum[0];
		for(i=1;i<N;i++){
				if(sum[i]>T)
						T=sum[i];
		}
		printf("%.2f",T);
		return 0;
}
