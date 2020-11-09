#include<stdio.h>

int main(){
	int wei = 0;
	double sum = 0.2;
	scanf("%d",&wei);
	
	if (wei<=10){
		sum += wei*0.8;
		printf("%.2f\n",sum);
	} else if (wei<=20){
		sum += wei*0.75;
		printf("%.2f\n",sum);
	} else if (wei<=30){
		sum += wei*0.70;
		printf("%.2f\n",sum);
	} else{
		printf("fail\n");
	}
	return 0;
}
