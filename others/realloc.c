#include<stdio.h>
#include<stdlib.h>


int main(){
	int i,num;
	int count = 0;
	int*ptr=NULL;
	do{
		printf("请输入一个整数（输入-1表示结束）:");
		scanf("%d",&num);
		count++;
		ptr=(int*)realloc(ptr,count*sizeof(int));
		if(ptr==NULL)
			exit(1);
		ptr[count-1]=num;
	}while(num!=-1);
	for(i=0;i<count;i++)
		printf("%d ",ptr[i]);
	putchar('\n');
	free(ptr);
	return 0;
}
