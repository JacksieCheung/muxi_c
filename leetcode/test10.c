#include<stdio.h>

int main(){
		int x,y,z;
		scanf("%d%d",&x,&y);
		while(x%y!=0){
				z=x%y;
				x=y;
				printf("%d",x);
				y=z;//除数是0的时候没有意义。
				printf("%d",y);
		}
		printf("%d",y);
		return 0;
}

