#include<stdio.h>
#define NUM 128

void del_digit(char s[]){
	int i,k,j,n=0;
	char temp;
	for(i=0;i<NUM;i++){
		if (s[i]=='\0')
			break;
		n++;
	}
for(j=0;j<n;j++){
	for(i=0;i<n;i++){
		if(s[i]<='9'&&s[i]>='0'){
			s[i]='\0';
			for(k=i;k<n-1;k++){
				temp=s[k];
				s[k]=s[k+1];
				s[k+1]=temp;
			}
		}
	}
}
}
int main(){
	char s[NUM];
	puts("请输入一行数字");
	scanf("%s",s);
	del_digit(s);
	printf("%s\n",s);
	return 0;
}
