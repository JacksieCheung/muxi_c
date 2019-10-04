#include<stdio.h>
#define NUM 5

int min_of(const int v[],int n){
	int i;
	int min = v[0];
	for (i=1;i<n;i++){
		if(v[i]<min)
			min=v[i];
	}
	return min;
}


int main(){
	int a[NUM];
	int i;
	puts("请为数组赋值");
	for (i=0;i<NUM;i++){
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
	}
	printf("%d\n",min_of(a,NUM));
	return 0;
	}
