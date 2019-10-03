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
	
	int max = bunpu[0];
	for (i=1;i<11;i++){
		if (bunpu[i]>max)
			max=bunpu[i];
	}

	for (i=0;i<max;i++){
		for(j=0;j<11;j++){
			if(bunpu[j]<max-i)
				printf("   ");
			else
				printf("*  ");

		}
		printf("\n");
	}
		puts("_____________________________");
		printf("0 10 20 30 40 50 60 70 80 90 100\n");
	return 0;
}



