#include<stdio.h>
#include<math.h>
#define spr(n) ((n)*(n))

struct point{
	double x;
	double y;
};

struct car{
	struct point pt1;
	double fuel;
};

double distance_of_two_point(double *x,double *y){
	return sqrt(spr(*x)+spr(*y));
}

void place_and_fuel(struct car*c){
	puts("现在的位置");
	printf("(%lf,%lf)\n",c->pt1.x,c->pt1.y);
	puts("现在剩余的油量");
	printf("%lf",c->fuel);
}

void make(double *x,double *y,struct car*c){
	double len;
	len=distance_of_two_point(x,y);
	if(len<(c->fuel)){
		(c->fuel)-=len;
	        (c->pt1.x)+=*x;
		(c->pt1.y)+=*y;
	}
	else
		puts("油不够");
}

int main(){
	int i;
	double x,y;
	struct car c={0,0,6000};
	puts("是否启动汽车？【Yes---1/NO---0】");
	scanf("%d",&i);
	while (i){
		place_and_fuel(&c);
		puts("请输入目地移动的x和y距离");
		scanf("%lf%lf",&x,&y);
		make(&x,&y,&c);
		puts("现在的地址和油量");
		place_and_fuel(&c);
		puts("是否继续行驶?【Yes---1/No---0】");
		scanf("%d",&i);
	}
	return 0;
}



