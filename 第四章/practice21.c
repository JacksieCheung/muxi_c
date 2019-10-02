#include<stdio.h>
int main(){
	int a,b,i,k;
	puts("请输入长方形两边长");
	scanf("%d%d",&a,&b);
		if(a>=b){
			for(i=1;i<=b;i++){
				for(k=1;k<=a;k++)
				printf("*");
			printf("\n");
        	}
		}

		if(a<b){
			for(i=1;i<=a;i++){
				for(k=1;k<=b;k++)
				printf("*");
			printf("\n");
		}
		}
		return 0;
}
