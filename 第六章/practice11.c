#include<stdio.h>
#define NUM 7

int search_idx(const int v[],int idx[],int key, int n){
	int i,k=0;
	for (i=0;i<n;i++){
		if (v[i]==key){
			idx[k]=i;
			k++;
		}
	}
	return k;
	}

		
int main(){
int i;
int a[NUM];
int b[NUM]={0};

puts("为数组a赋值");
for (i=0;i<NUM;i++){
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
}

int key;
puts("请输入需要查找的元素");
scanf("%d",&key);
int j = search_idx(a,b,key,NUM);
if(j!=0)
	printf("数组a中有%d个元素%d\n",i,key);
else
printf("查找失败\n");

for(i=0;i<j;i++)
       printf("%d",b[i]);
printf("\n");       
return 0;
}
