#include<stdio.h>

int romanToInt(char * s){
    int a[11]={0};
    int i=0,k,sum=0;
    while(*s!='\0'){
    switch(*s){
        case 'M':a[i]=1000;break;
        case 'D':a[i]=500;break;
        case 'C':a[i]=100;break;
        case 'L':a[i]=50;break;
        case 'X':a[i]=10;break;
        case 'V':a[i]=5;break;
        case 'I':a[i]=1;break;
    }
        i++;
	s++;
    }
    for(k=0;k<i;k++){
        if(a[k]<a[k+1])
            sum-=a[k];
        if(a[k]>=a[k+1])
            sum+=a[k];
    }
    return sum;
}

int main(){
	int sum;
	puts("请输入一个罗马数字");
	char p[100]={0};
	scanf("%s",p);
	//printf("%s",p+1);
	sum=romanToInt(p);
	printf("%d",sum);
	return 0;
}
	
