#include<stdio.h>
#define NAME_LEN 64

struct student {
	char   name[NAME_LEN];
	int    height;
	float  weight;
	long   schols;
};

int main(){
	struct student takao={"Takao",173,86.2};
	
	printf("姓名=%s    add=%p\n",  takao.name,&takao.name);
	printf("身高=%d    add=%p\n",  takao.height,&takao.height);
	printf("体重=%.1f  add=%p\n",  takao.weight,&takao.weight);
	printf("奖学金=%ld add=%p\n",takao.schols,&takao.schols);
	
	return 0;
}
