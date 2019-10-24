//先输入n确定输入案例，再输入两个数字A，B表示一组，若A可以除B则输出yes
#include<stdio.h>

int main(){
		int n;
		int i,k;
		scanf("%d",&n);
		int a[n][2];
		for(i=0;i<n;i++){
				for(k=0;k<2;k++){
						scanf("%d",&a[i][k]);
				}
		}

		for(i=0;i<n;i++){
				if(a[i][0]%a[i][1]==0)//数组从0开始，越界居然没有警告
						printf("YES\n");
				else
						printf("NO\n");
		}
		return 0;
}
