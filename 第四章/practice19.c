#include<stdio.h>
int main(){
	int a,b;
	for(a=0;a<=9;a++){
		if(a>0)
		printf("%3d|",a);

		if(a==0){
		printf("    ");
		for(b=1;b<=9;b++)
			printf("%3d",b);
		printf("\n_____________________________________");
		}

		if(a>0){
		for(b=1;b<=9;b++){
			printf("%3d",a*b);
		}
	}	
	printf("\n");
	}
	return 0;
}
