#include<stdio.h>
int main(){
	int months;
	puts("请输入月份");
	scanf("%d",&months);
	switch (months){
		case 3:
		case 4:
		case 5: printf("春季\n"); break;
		case 6: 
		case 7:
		case 8: printf("夏季\n"); break;
		case 9:
		case 10:
		case 11: printf("秋季\n"); break;
		default :printf("冬季\n");
	}
}
