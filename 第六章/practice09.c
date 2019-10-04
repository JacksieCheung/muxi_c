#include<stdio.h>
#define NUM 6

void rev_intary(int v[],int n){
	int i,temp;
	if(n%2){
		for(i=0;i<(n-1)/2;i++){
			temp = v[i];
			v[i] = v[n-i-1];
			v[n-i-1] = temp;
		}
	}
	else{
		for(i=0;i<n/2;i++){
			temp = v[i];
			v[i] = v[n-i-1];
			v[n-i-1] = temp;
		}
	}
}


int main(){
	int i;
	int a[NUM];
	puts("请为数组a赋值");

	for(i=0;i<NUM;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	puts("_______________________");
	rev_intary(a,NUM);

	for(i=0;i<NUM;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}
