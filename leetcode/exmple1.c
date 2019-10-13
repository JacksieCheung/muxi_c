#include<stdio.h>
#include<stdlib.h>

int main(){
	static int i,k,n=0;
	int a[6]={-1,0,1,2,-1,-4};
	int*array=NULL;
	for(i=0;i<5;i++){
		for(k=i+1;k<6;k++){
		if(a[i]==a[k])
			break;
		}
		if(a[i]==a[k])
			continue;
		n++;
		array=(int*)realloc(&array,n*sizeof(int));
		*(array++)=a[i];
		if(a[4]==a[5]){
			array=(int*)realloc(&array,n*sizeof(int));
			*(array++)=a[5];
		}
	}
	array-=(n+1);
	for (i=0;i<n+1;i++)
		printf("%d",array[i]);
	return 0;
}
