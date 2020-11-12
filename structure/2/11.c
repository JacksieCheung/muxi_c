// 给出两个等长序列（已经排序），求出这两个序列的中位数
#include<stdio.h>

// 时间复杂度O(n+m)，而且是最好最坏都是O(n+m)
// 空间复杂度O(m+n),根据AB长度而定
int middle(int* A,int* B,int len){
	int C[len*2];
	int i=0,j=0,k=0;

	while(i<len&&j<len){
		if (A[i]<B[j]) {
			C[k]=A[i];
			i++;
			k++;
		} else {
			C[k]=B[j];
			j++;
			k++;
		}
	}

	while(i<len){
		C[k]=A[i];
		k++;
		i++;
	}

	while(j<len){
		C[k]=B[j];
		k++;
		j++;
	}

	return C[len-1];
}

int main(){
	int A[]={11,13,15,17,19,50};
	int B[]={2,4,6,8,20,21};
	int len = sizeof(A)/sizeof(A[0]);

	printf("%d\n",middle(A,B,len));
	return 0;
}
