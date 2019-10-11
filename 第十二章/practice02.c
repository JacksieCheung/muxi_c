#include<stdio.h>

struct student{
	char name[128];
	int  height;
	float weight;
};

void change(struct student*str){
	if(str->height<180)
		str->height=180;
	if(str->weight>80)
		str->weight=80;
}

int main(){
	struct student A;
	puts("please input your name");
	scanf("%s",A.name);
	puts("please input your height");
	scanf("%d",&A.height);
	puts("please input your weight");
	scanf("%f",&A.weight);
	change(&A);
	printf("name:%s\nheight:%d\nweight:%.1f\n",A.name,A.height,A.weight);
	return 0;
}

