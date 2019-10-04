#include<stdio.h>

int fx =0;
void func(){
	static int sx = 0;
	int ax = 0;
	static int b=1;

	printf("%3d%3d%3d  ",ax++,sx++,fx++);
	printf("第%d次\n",b++);
}


int main(){
	int i;

	for(i=0;i<10;i++)
		func();
	return 0;
}
