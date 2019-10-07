#include<stdio.h>

void decrement_date(int*y,int*m,int*d){
	if(*y%4){
		if(*m==1||*m==2||*m==5||*m==7||*m==10||*m==12){
			if(*d>1&&*d<=31)
				*d=*d-1;
			if(*d==1){
				if(*m==1){
					*y=*y-1;
					*m=12;
					*d=31;
				}
				else{
					*m=*m-1;
					*d=30;
				}
			}
		}
		if(*m==4||*m==6||*m==9||*m==11){
			if(*d==1){
				(*m)--;
				*d=31;
			}
			else 
				(*d)--;
		}

		if(*m==8){
			if(*d==1){
			(*m)--;
			*d=31;
			}
			else
				*d=*d-1;
		}
		if(*m==3){
			if(*d==1){
				*m=*m-1;
				*d=28;
			}
			else{
				*d=*d-1;
			}
		}
	}
	else{
		if(*m==1||*m==2||*m==5||*m==7||*m==10||*m==12){
			if(*d>1&&*d<=31)
				*d=*d-1;
			if(*d==1){
				if(*m==1){
					*y=*y-1;
					*m=12;
					*d=31;
				}
				else{
					*m=*m-1;
					*d=30;
				}
			}
		}
		if(*m==8){
			if(*d==1){
			*m=*m-1;
			*d=31;
			}
			else
				*d=*d-1;
		}
		if(*m==3){
			if(*d==1){
				*m=*m-1;
				*d=29;
			}
			else{
				*d=*d-1;
			}
		}
	}
}



int main(){
	int y,m,d;
	puts("请输入日期");
	scanf("%d%d%d",&y,&m,&d);
	decrement_date(&y,&m,&d);
	printf("前一天是%d年%d月%d日",y,m,d);
	return 0;
}


























