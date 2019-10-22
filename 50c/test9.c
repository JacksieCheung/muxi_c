//求一年的第几天，注意闰年
//傻瓜版本
#include<stdio.h>

int main(){
		int i,x,y,z;
		puts("请输入日期");
		scanf("%d%d%d",&x,&y,&z);
		if(x%4!=0){//不是闰年
				switch(y){
						case 1:printf("%d",z);break;
						case 2:printf("%d",31+z);break;
						case 3:printf("%d",31+28+z);break;
						case 4:printf("%d",31+28+31+z);break;
						case 5:printf("%d",31+28+31+30+z);break;
						case 6:printf("%d",31+28+31+30+31+z);break;
						case 7:printf("%d",31+28+31+30+31+30+z);break;
						case 8:printf("%d",31+28+31+30+31+30+31+z);break;
						case 9:printf("%d",31+28+31+30+31+30+31+31+z);break;
						case 10:printf("%d",31+28+31+30+31+30+31+31+30+z);break;
						case 11:printf("%d",31+28+31+30+31+30+31+31+30+31+z);break;
						case 12:printf("%d",31+28+31+30+31+30+31+31+30+31+30+z);break;
				}
		}
		else{
				switch(y){
						case 1:printf("%d",z);break;
						case 2:printf("%d",31+z);break;
						case 3:printf("%d",31+29+z);break;
						case 4:printf("%d",31+29+31+z);break;
						case 5:printf("%d",31+29+31+30+z);break;
						case 6:printf("%d",31+29+31+30+31+z);break;
						case 7:printf("%d",31+29+31+30+31+30+z);break;
						case 8:printf("%d",31+29+31+30+31+30+31+z);break;
						case 9:printf("%d",31+29+31+30+31+30+31+31+z);break;
						case 10:printf("%d",31+29+31+30+31+30+31+31+30+z);break;
						case 11:printf("%d",31+29+31+30+31+30+31+31+30+31+z);break;
						case 12:printf("%d",31+29+31+30+31+30+31+31+30+31+30+z);break;
		}
		}
		return 0;
}

