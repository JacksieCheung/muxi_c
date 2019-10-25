//划拳找两数和另两数是否想等且不能同时相等
//我想用二维数组一次性存储
#include<stdio.h>

int main(){
		int N;
		int i,k;
		int sum;
		int count1=0,count2=0;
		scanf("%d",&N);
		int a[N][4];
		for(i=0;i<N;i++){
				for(k=0;k<4;k++){
						scanf("%d",&a[i][k]);
				}
		}

		for(i=0;i<N;i++){
				sum=a[i][0]+a[i][2];
				if((a[i][1]==sum)&&(a[i][3]!=sum))
						count2++;
				
				if((a[i][3]==sum)&&(a[i][1]!=sum))
						count1++;
		}
		printf("%d %d\n",count1,count2);
		return 0;
}
