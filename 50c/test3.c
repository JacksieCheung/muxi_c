//打印一个倒三角一个正三角
//两个for循环非通用模式
#include<stdio.h>

int main(){
		int y=3,i=0,k=0;
		for (i=0;i<y;i++){
				for(k=0;k<i;k++)
						printf(" ");
				for(k=0;k<y*2-1-2*i;k++)
						printf("*");
				printf("\n");
		}
		for (i=1;i<y;i++){//最外层循环表示行数
				for(k=(y*2-1)/2-i;k>0;k--)//里面打空格和*要变化，需要和i有关（表达式里有i）
						printf(" ");
				for(k=0;k<1+2*i;k++)
						printf("*");
				printf("\n");
		}
		return 0;
}
