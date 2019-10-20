#include<stdio.h>

int main(){
	int i=0,n=0,x;
	int a[100];
	for(i=2;i<=100;i++){
		for(n=2;n<i;n++){
			if((i!=n)&&(i%n!=0))
				break;	
		}
		if(i%n==0)
				printf("%d\n",i);
	}
	return 0;
}
