#include<stdio.h>
int main(){
	int i,num,j;
	int bunpu[11] = {0};
	puts("请确认数组元素个数");
	do {
		scanf("%d",&num);
		if (num<1)
		puts("请重新输入");
	}while (num<1);
	int a[num];

	puts("请为数组a赋值");
	for (i=0;i<num;i++){
		printf("%d号:",i+1);
		do {
		scanf("%d",&a[i]);
		if (a[i]>100 || a[i]<0)
			puts("请重新输入");
		}while (a[i]>100 || a[i]<0);
		bunpu[a[i]/10]++;
	}
		
	puts("\n_______分布图_______");
	printf("     100:");
	for (i=0;i<bunpu[10];i++)
		printf("*");
	printf("\n");
	
	for (i=9;i>=0;i--){
		printf("%3d - %3d",i*10,i*10+9);
		for (j=0;j<bunpu[i];j++)
			printf("*");
		printf("\n");
	}
	return 0;
}



