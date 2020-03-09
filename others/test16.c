#include<stdio.h>

int add(int i) {
    --i;
    printf("%d\n",i);
    if (i == 0) {
        return i;
    } else {
        //printf("%s","one");
        return add(i);
    }
}

int main()
{
    int i = 10;
    i = add(i);
    printf("%d",i);
    return 0;
}
