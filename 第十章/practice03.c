#include<stdio.h>

void swap(int*a,int*b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void sort3(int*n1,int*n2,int*n3){
	if(*n1<*n2)
		swap(n1,n2);
	if(*n1<*n3)
		swap(n1,n3);
	if(*n2<*n3);
		swap(n2,n3);
}

int main(){
	int n1,n2,n3;
	puts("请输入三个数");
	scanf("%d%d%d",&n1,&n2,&n3);
	sort3(&n1,&n2,&n3);
	printf("%d\n%d\n%d\n",n1,n2,n3);
	return 0;
}

