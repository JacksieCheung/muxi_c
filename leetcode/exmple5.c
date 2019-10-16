#include<stdio.h>
#include<string.h>

int isValid(char * s){
    if(s[0]=='\0'||s[0]==')'||s[0]==']'||s[0]=='}')
        return 0;
    int len=strlen(s);
    int i,k=0,v=0;
    char tmp[len+1];
    for(i=0;i<len;i++){
        switch(s[i]){
            case '(':tmp[k]=s[i],k++;break;
            case '[':tmp[k]=s[i],k++;break;
            case '{':tmp[k]=s[i],k++;break;
            case ')':(tmp[k-1]=='(')?(k--):(v++);break;
            case ']':(tmp[k-1]=='[')?(k--):(v++);break;
            case '}':(tmp[k-1]=='{')?(k--):(v++);break;
        }
}
    if(k==0)
        return 1;
    return 0;
}

int main(){
	char s[128]="]";
	int i=isValid(s);
	if(i==1)
		printf("TRUE");
	if(i==0)
		printf("FALSE");
	return 0;
}
