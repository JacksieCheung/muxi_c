#include<stdio.h>

void sort(int a,int b,int c) {
    int t;
    int temp[3];
    temp[0]=a;
    temp[1]=b;
    temp[2]=c;
    printf("%d %d %d\n",temp[0],temp[1],temp[2]);
    for (int i=0;i<2;i++) {
        for (int k=0;k<2-i;k++) {
            printf("%d\n",k+1);
            if (temp[k]>temp[k+1]) {
                t = temp[k];
                temp[k] = temp[k+1];
                temp[k+1] = t;
            }
        }
    }
    puts("______________________");
    printf("%s\n","从小到大输出：");
    for (int i=0;i<3;i++) {
        printf("%d ",temp[i]);
    }
    puts("\n______________________");
    printf("%s\n","输出最大和最小：");
    printf("%d %d",temp[0],temp[2]);
    puts("\n______________________");
    printf("%s\n","输出无符号的最大最小：");
    if (temp[0] > 0) {
        printf("%d %d\n",temp[0],temp[2]);
    } else if (temp[1] > 0) {
        printf("%d %d\n",temp[1],temp[2]);
    } else if (temp[2] > 0) {
        printf("%d\n",temp[2]);
    } else {
        printf("%s\n","没有无符号数");
    }
}

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    sort(a,b,c);
    return 0;
}    
