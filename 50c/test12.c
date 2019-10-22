//如果是偶数，砍掉一半，如果是奇数，3n+1砍掉一半
#include<stdio.h>

int main(){
		int n,count=0;
		puts("请输入一个数");
		scanf("%d",&n);
		while(n!=1){
				if(n%2==0)
						n/=2;
				else
						n=(3*n+2)/2;
				count++;
		}
		printf("%d\n",count);
		return 0;
}

