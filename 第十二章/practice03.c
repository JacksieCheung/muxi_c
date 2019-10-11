#include<stdio.h>

struct xyz{
	int x;
	long y;
	double z;
};

struct xyz scan(int a,long b,double c){
	struct xyz temp;
	temp.x=a;
	temp.y=b;
	temp.z=c;
	return temp;
}

int main(){
	int a;
	long b;
	double c;
	puts("please input a");
	scanf("%d",&a);
	puts("please input b");
	scanf("%ld",&b);
	puts("please input c");
	scanf("%lf",&c);
	struct xyz s=scan(a,b,c);
	printf("%d\n%ld\n%.1f\n",s.x,s.y,s.z);
	return 0;
}
