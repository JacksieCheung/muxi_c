#include<stdio.h>

void copy(int a[4][3],int b[4][3],int c[2][4][3]){
	int i,k,v;
	for (v=0;v<2;v++){
		if (v==0){
		for (i=0;i<4;i++){
			for (k=0;k<3;k++)
			c[v][i][k]=a[i][k];
		}
		}
		else{
		for (i=0;i<4;i++){
			for (k=0;k<3;k++)
			c[v][i][k]=b[i][k];
		}
	}
}
}


int main(){

	int i,k,v;
	int a[4][3];
	int b[4][3];
	int c[2][4][3]={0};
	puts("为数组a赋值");
	for (i=0;i<4;i++){
		for(k=0;k<3;k++){
			printf("a[%d][%d]=",i,k);
			scanf("%d",&a[i][k]);
		}
	}

	puts("请为数组b赋值");
	for (i=0;i<4;i++){
		for(k=0;k<3;k++){
			printf("b[%d][%d]=",i,k);
			scanf("%d",&b[i][k]);
		}
	}

			
	copy(a,b,c);
	puts("________________________________");
	for(v=0;v<2;v++){
	   	for(i=0;i<4;i++){
			for(k=0;k<3;k++){
				printf("%d   ",c[v][i][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
