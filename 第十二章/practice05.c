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

double distance_of_two_point(struct point*A,struct point*B){
	return sqrt(spr((A->x)-(B->x))+spr((A->y)-(B->y)));
}

void place_and_fuel(struct car*c){
	puts("现在的位置");
	printf("(%lf,%lf)\n",c->pt1.x,c->pt1.y);
	puts("现在剩余的油量");
	printf("%lf",c->fuel);
}

void make(struct point*B,struct car*c){
	double len;
	len=distance_of_two_point(&(c->pt1),B);
	if(len<(c->fuel)){
		(c->fuel)-=len;
	        (c->pt1)=*B;
	}
	else
		puts("油不够");
}

int main(){
	int i;
	struct point pt2;
	struct car c={0,0,6000};
	puts("是否启动汽车？【Yes---1/NO---0】");
	scanf("%d",&i);
	while (i){
		place_and_fuel(&c);
		puts("请输入目地地点x和y");
		scanf("%lf%lf",&pt2.x,&pt2.y);
		make(&pt2,&c);
		puts("现在的地址和油量");
		place_and_fuel(&c);
		puts("是否继续行驶?【Yes---1/No---0】");
		scanf("%d",&i);
	}
	return 0;
}
	
					
