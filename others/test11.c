#include<stdio.h>

int main() {
    float x = 1,y;
    y = ++x*++x;
    printf("%f",y);
    return 0;
}
