//绝对值排序规范版（其二）
#include<stdio.h>
#include<stdlib.h>

int main(){
        int i=0,tmp,n,k;
        while(scanf("%d",&n)&&n!=EOF){
            if(n==0)
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

