//矩阵反转 (待解决)
#include<stdio.h>

int main(){
		int i;
		int j;
		int a[4][4];
		int b[4][4];
		for(i=0;i<4;i++){
				for(j=0;j<4;j++){
						scanf("%d",&a[i][j]);
				}
		}
		//矩阵反转
		for(i=0;i<4;i++){
				for(j=0;j<4;j++){
						b[j][i]=a[i][j];
				}
		}
		puts("___________________");
		for(i=0;i<4;i++){
				for(j=0;j<4;j++){						
						printf("%d ",b[i][j]);
				}
				printf("\n");
		}
		return 0;
}

