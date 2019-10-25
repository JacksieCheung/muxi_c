//找最高身高，没啥难度
#include<stdio.h>

int main(){
		int N;
		scanf("%d",&N);
		float a[N][100];
		int Nptr[N];
		int i,k;
		for(i=0;i<N;i++){
				scanf("%d",&Nptr[i]);//利用一个一维数组存储数据的指针，此指针用于限定元原数据的长度。
				for(k=0;k<Nptr[i];k++){
						scanf("%f",&a[i][k]);
				}
		}

		float max[N];//用数组存储每个案例的结果
		for(i=0;i<N;i++){
				max[i]=a[i][0];
				for(k=1;k<Nptr[i];k++){
						if(a[i][k]>max[i])
								max[i]=a[i][k];
				}
		}

		for(i=0;i<N;i++){
				printf("%.2f\n",max[i]);
		}
		return 0;
}

