#include<stdio.h>

int M_search(int A[],int B[],int n){
	int s1=0,d1=n-1,m1,s2=0,d2=n-1,m2;

	while(s1!=d1||s2!=d2){
		m1=(s1+d1)/2;
		m2=(s2+d2)/2;
		if (A[m1]==B[m2]) return A[m1]; // 1. 如果中位数相等，则直接得出中位数
		if (A[m1]<B[m2]) { // 如果A中位数比B中位数小，则舍弃A中位数左边和B中位数右边
			if ((s1+d1)%2==0){
				s1=m1;
				d2=m2;
			} else {
				s1=m1+1;
				d2=m2;
			}
		} else { // 如果A中位数比B中位数大，则舍弃A中位数右边和B中位数左边
			if ((s2+d2)%2==0){
				d1=m1;
				s2=m2;
			} else { // 判断奇偶是为了使B和A元素个数保持一致。
				d1=m1;
				s2=m2+1;
			}
		}
	}

	return A[s1]<B[s2]?A[s1]:B[s2];
}

int main(){
	int A[]={11,13,15,17,19};
	int B[]={2,4,6,8,20};
	printf("%d\n",M_search(A,B,5));	
}
