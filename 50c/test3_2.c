//打印正倒三角 用一个for循环
#include<stdio.h>

int main(){
        int y=3,i=0,k=0;
        for (i=0;i<y;i++){
                for(k=0;k<i;k++)
                        printf(" ");
                for(k=0;k<y*2-1-2*i;k++)
                        printf("*");
                printf("\n");
        }
        for (i=1;i<y;i++){
                for(k=(y*2-1)/2-i;k>0;k--)
                        printf(" ");
                for(k=0;k<1+2*i;k++)
                        printf("*");
                printf("\n");
        }
        return 0;
}

