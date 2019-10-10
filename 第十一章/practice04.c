#include<stdio.h>

void put_string (const char*s){
	printf("%s\n",s);
}

int main(){
	char*s={"sadff"};
	put_string(s);
	return 0;
}
