#include<stdio.h>

void mat_mul(const int a[4][3],const int b[3][4],int c[3][3]){
	int i,k;
	for (i=0;i<3;i++){
		for (k=0;k<3;k++)
		       c[i][k]=a[i][k]*b[i][k];
	
	}
}


int main(){
	int i,k;
	int a[4][3];
	int b[3][4];
	int c[3][3];
	
	puts("请为数组a赋值");
	for (i=0;i<4;i++){
		for(k=0;k<3;k++){
			printf("a[%d][%d]=",i,k);
			scanf("%d",&a[i][k]);
		}
	}
	puts("请为数组b赋值");
	for (i=0;i<3;i++){
		for(k=0;k<4;k++){
			printf("b[%d][%d]=",i,k);
			scanf("%d",&b[i][k]);
		}
	}

	mat_mul(a,b,c);

	puts("__________________________________");
	for (i=0;i<3;i++){
		for(k=0;k<3;k++){
			printf("c[%d][%d]=%d  ",i,k,c[i][k]);
		}
		printf("\n");
	}
	return 0;
}

