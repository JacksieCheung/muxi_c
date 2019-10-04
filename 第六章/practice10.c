#include<stdio.h>
#define NUM 5

void intary_rcpy(int v1[],const int v2[],int n){
	int i;
	for(i=0;i<n;i++)
		v1[i] = v2[n-i-1];
}



int main(){
	int a1[NUM];
	int a2[NUM];
	int i;
	puts("请为a2数组赋值");
	for(i=0;i<NUM;i++){
		printf("a2[%d]=",i);
		scanf("%d",&a2[i]);
	}
        intary_rcpy(a1,a2,NUM);

	puts("a1数组为：");
	for(i=0;i<NUM;i++)
		printf("a1[%d]=%d\n",i,a1[i]);

	return 0;
}
