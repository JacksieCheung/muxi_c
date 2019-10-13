#include<stdio.h>

int main(){
	int i,k,n=2;
	printf("%3d",2);
	for(i=2;i<=100;i++){
		for (k=2;k<i;k++){
		if(i%k==0)
			break;
		if(k==i-1){
			printf("%3d",i);
			n++;
			if(n%5==(0||5))
			printf("\n");
		if(i%k!=0)
			continue;
		}
		continue;
	}
	}
	return  0;
}
