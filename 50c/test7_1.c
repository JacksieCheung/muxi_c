//求奇数乘积规范版
#include<stdio.h>

int main(){
        int i,num=1,n;
		while(scanf("%d",&n)&&n!=0){
		int a[n];
		for(i=0;i<n;i++)
				scanf("%d",&a[i]);
        for(i=0;i<n;i++){
                if(a[i]%2!=0)
                    num*=a[i];
        }
        printf("%d\n",num);
		}
        return 0;
}
