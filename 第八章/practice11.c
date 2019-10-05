#include<stdio.h>

int main(){
	int ch,i,k;
	int cnt[10]={0};
	while((ch=getchar())!=EOF){
		if(ch>='0'&&ch<='9')
			cnt[ch-'0']++;
	}


	/*int cnt[10]= {4,1,1,64,2,5,8,5,6,7,};*/

	puts("_____________________");
	for (k=0;k<10;k++){
		printf("%d:",k);
	for (i=0;i<cnt[k];i++){
		putchar('*');;
	}
	printf("\n");
	}

	puts("____________________");
	int max;
	max = cnt[0];
	for (i=1;i<10;i++){
		if (cnt[i]>max)
			max=cnt[i];
	}

	for (i=0;i<max;i++){
		for(k=0;k<10;k++){
		if(cnt[k]<max-i)
			printf(" ");
		if(cnt[k]>=max-i)
			printf("*");
	}
		printf("\n");
}
return 0;
}

