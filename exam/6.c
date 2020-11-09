#include<stdio.h>

int countWeek(int year){
	int c=year/100;
	int y=year%100-1;
	int m=13;
	int d=1;

	return (c/4-2*c+y+y/4+13*(m+1)/5+d-1)%7;
}

void printDate(int w,int* days,char (*months)[4]){
	for (int i=0;i<12;i++){ // 十二个月
		printf("============");
		printf("%s",months[i]);
		printf("============\n");
		printf("Sun Mon Tue Web Thu Fri Sat\n");
		for (int k=0;k<w;k++){
			printf("   ");
			printf(" ");
		}
		for (int j=1;j<=days[i];j++){ // 日
			printf("%3d",j);
			printf(" ");
			w++;
			if (w==7) {
				printf("\n");
				w=0;
			}
		}
		printf("\n\n");
	}
}

int main(){
	int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
	char months[12][4]={{"JUN"},{"FEB"},{"MAR"},{"APR"},{"MAY"},{"JUN"},{"JUL"},{"AUG"},{"SEP"},{"OCE"},{"NOV"},{"DEC"}};

	int year = 0;
	scanf("%d",&year);
	if (year%4==0&&year%100!=0) days[1]=29;
	if (year%100==0&&year%400==0) days[1]=29;

	int w = countWeek(year);
	
	printDate(w,days,months);
	return 0;
}
