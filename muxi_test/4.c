//今天是第几天
#include<stdio.h>

int main(){
		int i;
		char date[11];
		int year=0,month=0,day=0,sum=0;
		scanf("%s",date);
		//把每个月有多少天单独存进一个数组
		int day_1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		//把年给取出来 并且转换成int型判断闰年
		for(i=0;i<4;i++){
				year=year*10+(date[i]-'0');
		}
		if(year%4==0)
				day_1[1]=29;
		//把月份转成int
		for(i=5;i<7;i++){
				month=month*10+(date[i]-'0');
		}
		//把日转成int
		for(i=8;i<=9;i++){
				day=day*10+(date[i]-'0');
		}
		//算总天数
		for(i=0;i<month;i++){
				sum+=day_1[i];
		}
		printf("%d",sum+day);
		
		return 0;
}
