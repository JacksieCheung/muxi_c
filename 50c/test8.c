//青年歌手大赛去掉最高分去掉最低分算平均分
//2<n<=100
#include<stdio.h>

int main(){
		int n,i,k,tmp;
		float num=0;
		while(scanf("%d",&n)&&n!=0){
			float a[n];
			for(i=0;i<n;i++)
				scanf("%f",&a[i]);
			for(i=0;i<n;i++){
				for(k=0;k<n-1;k++){
					if(a[i]>a[i+1]){
						tmp=a[i];
						a[i]=a[i-1];
						a[i-1]=tmp;
					}
				}
			}
			for(i=1;i<n-1;i++)
				num+=a[i];
			num/=(n-2);
			printf("%.2f\n",num);
		}
	return 0;
}	
