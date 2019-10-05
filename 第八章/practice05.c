#include<stdio.h>

enum sex {boy,girl,Invalid};
enum season {spring,summer,autumn,winter,fail};

enum sex select1(void){
	int temp;
	do {
		puts("请选择性别 男----0 女----1");
		scanf("%d",&temp);
		if (temp<boy||temp>Invalid)
			puts("请不要拿您的性别开玩笑");
	}while(temp<boy||temp>Invalid);
	return temp;
}


enum season select2(void){
	int temp;
	do {
	puts("请选择出生季节 春---0 夏---1 秋---2 冬---3");
	scanf("%d",&temp);
	if(temp<spring||temp>fail)
		puts("请重新选择您的出生季节");
	}while(temp<spring||temp>fail);
	return temp;
}


int main(){
	enum sex selected1 = select1();
	enum season selected2 = select2();
	
	if(selected1==0){
		switch(selected2){
			case spring:
				printf("春天男孩\n"); break;
			case summer:
				printf("夏天男孩\n"); break;
			case autumn:
				printf("秋天男孩\n");break;
			case winter:
				printf("冬天男孩\n");break;
		}
	}else{
		switch(selected2){
			case spring:
				puts("春天女孩\n");break;
			case autumn:
				puts("秋天女孩\n");break;
			case winter:
				puts("冬天女孩\n");break;
			case summer:
				puts("夏天女孩\n");break;
		}
	}
	return 0;
}
