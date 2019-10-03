#include<stdio.h>
int main(){
	int i,j,c,b;
	int a[4][4];
	puts("现在构建了一个4*4的表格");
	puts("现在请由左至右为每一行赋值");
	for (j=0;j<4;j++){
	for (i=0;i<4;i++){
		printf("a[%d][%d]=",j+1,i+1);
		scanf("%d",&a[j][i]);
	}
	printf("\n");
	}

	puts("现在你可以在表格中选择数据进行乘法运算（行和列都在4以内）");
	puts("请选择行:"); scanf("%d",&j);
	puts("请选择列:"); scanf("%d",&i);
	puts("请选择行:"); scanf("%d",&c);
	puts("请选择列:"); scanf("%d",&b);
	printf("他们的乘积是:%d\n",a[j-1][i-1]*a[c-1][b-1]);
	return 0;
}
