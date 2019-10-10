#include<stdio.h>
#include<string.h>

int* strtoi(char*nptr){
	int p[128]={0};
	int i,k;
	k=strlen(nptr);
	for(i=0;i<k;i++){
		switch(*nptr++){
			case '1':p[i]=1;break;
			case '2':p[i]=2;break;
			case '3':p[i]=3;break;
			case '4':p[i]=4;break;
			case '5':p[i]=5;break;
			case '6':p[i]=6;break;
			case '7':p[i]=7;break;
			case '8':p[i]=8;break;
			case '9':p[i]=9;break;
			case '0':p[i]=0;break;
		}
	}
	/*for (i=0;i<k;i++)
		printf("%d",p[i]);*/
	return p;
}

int main(){
	char*a={"151561531"};
	int*s=strtoi(a);
	int i;
	for(i=0;i<9;i++)
		printf("%d",s[i]);
	return 0;
}
