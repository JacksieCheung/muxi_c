#include<stdio.h>
#define NUM 5
#define NAME_LEN 128

struct student{
	char name[NAME_LEN];
	int  height;
	float weight;
	long schols;
};

void swap(struct student*a,struct student*b){
	struct student temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void sort_by_height(struct student a[],int n){
	int i,j;
	for (i=0;i<n-1;i++){
		for (j=n-1;j>i;j--){
			if(a[j-1].height>a[j].height)
				swap(&a[j-1],&a[j]);
		}
	}
}

int main(){
	struct student A[NUM];
	int i;
	for (i=0;i<NUM;i++){
		puts("please input your name,your height,your weight and yout schols");
		scanf("%s%d%f%ld",A[i].name,&A[i].height,&A[i].weight,&A[i].schols);
	}
		sort_by_height(A,NUM);
		for (i=0;i<NUM;i++){
			printf("%s %d %.1f %ld\n",A[i].name,A[i].height,A[i].weight,A[i].schols);
		}
		return 0;
}

		
