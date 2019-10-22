//绝对值排序规范版其一
#include<stdio.h>
#include<stdlib.h>

int main(){
        int i=0,tmp,n,k;
    	while(1){
			puts("请输入数据");
			scanf("%d",&n);
			if(n==0||n==EOF)
					break;
        	int a[n];
			for(i=0;i<n;i++)
					scanf("%d",&a[i]);
			for (i=0;i<n;i++){
            for(k=0;k<n-1;k++){
                if(abs(a[k])>abs(a[k+1])){
                    tmp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=tmp;
                }
        }
        }
        for (i=0;i<n;i++)
            printf("%d ",a[i]);
		printf("\n");
		}
        return 0;
}

