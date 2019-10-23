//这是一个输入随机测试样例再一次性输出的处理模板
#include<stdio.h>
#include<stdlib.h>

int main(){
		//输入处理（以一维数组为例）
		int n,i,len=0;
		int*ptr=NULL;
		ptr=(int*)malloc(sizeof(int));
		while(1){
				scanf("%d",&ptr[len]);
				if(ptr[len]==0)
						break;
				len++;
				ptr=(int*)realloc(ptr,(len+1)*sizeof(int));
		}
		//中间处理
		for(i=0;i<len;i++)
				ptr[i]=0;

		//一次性输出
		for(i=0;i<len;i++)
				printf("%d ",ptr[i]);
		printf("\n");
		free(ptr);
		return 0;
}
