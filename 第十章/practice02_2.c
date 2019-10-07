#include<stdio.h>

void increment_date(int*y,int*m,int*d){
	if(*y%2){
	if(*m==1||*m==3||*m==5||*m==8||*m==10||*m==7){
		if(*d==31){
			(*m)++;
			*d=1;
		}
		else
			(*d)++;
	}
	if(*m==4||*m==6||*m==9||*m==11){
		if(*d==30){
			(*m)++;
			*d=1;
		}
		else
			(*d)++;
	}

	if(*m==2){
		if(*d==28){
			(*m)++;
			*d=1;
		}
		else
			(*d)++;
	}

	if(*m==12){
		if(*d==31){
			(*y)++;
			*m=1;
			*d=1;
		}
		else
			(*d)++;
	}
	}

	else{	
	if(*m==1||*m==3||*m==5||*m==8||*m==10||*m==7){
		if(*d==31){
			(*m)++;
			*d=1;
		}
		else
			(*d)++;
	}
	if(*m==4||*m==6||*m==9||*m==11){
		if(*d==30){
			(*m)++;
			*d=1;
		}
		else
			(*d)++;
	}

	if(*m==2){
		if(*d==29){
			(*m)++;
			*d=1;
		}
		else
			(*d)++;
	}

	if(*m==12){
		if(*d==31){
			(*y)++;
			*m=1;
			*d=1;
		}
		else
			(*d)++;
	}
	}
}



int main(){
	int y,m,d;
	puts("请输入日期");
	scanf("%d%d%d",&y,&m,&d);
	increment_date(&y,&m,&d);
	printf("后一天是%d年%d月%d日",y,m,d);
	return 0;
}
	
