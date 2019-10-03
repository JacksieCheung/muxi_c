#include<stdio.h>
#define NUM 10
int main(){
	int i,temp;
	int a[NUM];
	puts("请给数组a赋值");
	for (i=0;i<NUM;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	if (NUM%2){
		for (i=0;i<(NUM-1)/2;i++){
			temp = a[i];
			a[i] = a[NUM-1-i];
			a[NUM-1-i] = temp;	
	}
	}else{
		for (i=0;i<NUM/2;i++){
			temp = a[i];
			a[i] = a[NUM-1-i];
			a[NUM-1-i] = temp;
	}
	}

	puts("___________");	
	for(i=0;i<NUM;i++)
		printf("a[%d}=%d\n",i,a[i]);
	return 0;
}
