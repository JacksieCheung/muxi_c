//第几天精简版
#include<stdio.h>

int main(){
		int year,month,day;//month作为了a数组的指针,表示每个月最后一位
		int i,daybefore=0;
		int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};

		scanf("%d%d%d",&year,&month,&day);
		if((year%4==0&&year%100!=0)||(year%400==0))//一般闰年时4的被数且不是整百，世纪闰年是400倍数
			a[1]=29;//判断是否为闰年
		if(month<1||month>12||day<1||day>a[month-1])
			printf("data error");
			else{
			for(i=0;i<month-1;i++)
				daybefore+=a[i];//计算这个月之前的天数
			printf("%d",day+daybefore);
			}
			return 0;
}
