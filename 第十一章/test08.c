#include<stdio.h>
#include<string.h>

void strtoi(char*nptr){
	int i,k;
	k=strlen(nptr);
	for(i=0;i<k;i++)
	printf("%d\n",(int)*(nptr+i));
}

int main(){
	char*a={"151561531"};
	strtoi(a);
	return 0;
}
