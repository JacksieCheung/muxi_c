#include<stdio.h>
#include<string.h>
#define NUM 126
#define N 3

void rev_string(char a[][NUM]){
	int i,k,n=0;
	char temp;
	printf("请输入%d个字符串\n",N);
	for (i=0;i<N;i++)
		scanf("%s",a[i]);
	
	for (i=0;i<N;i++){
		for(k=0;k<NUM;k++){
			if(a[i][k]=='\0')
				break;
			n++;
		}

		for(k=0;k<n/2;k++){
			temp=a[i][k];
			a[i][k]=a[i][n-k-1];
			a[i][n-k-1]=temp;
		}	
		n=0;
	}

	
	for(i=0;i<N;i++)
	printf("%s\n",a[i]);

}


char a[N][NUM];
int main(){
	rev_string(a);
	return 0;
}
