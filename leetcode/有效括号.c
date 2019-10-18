bool isValid(char * s){
    if(s[0]=='\0')
        return 1;
    char stack[strlen(s)+1];
    int top=0;
    for(int i=0;s[i];i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{')
            stack[top++]=s[i];
        else{
        if(--top<0)
            return 0;
        if(s[i]==')'&&stack[top]!='(')
            return 0;
        if(s[i]==']'&&stack[top]!='[')
            return 0;
        if(s[i]=='}'&&stack[top]!='{')
            return 0;
    }
    }
    if(top==0)  //还可以写成return (!top); 虽然我不知道什么意思。
        return 1;
    else
        return 0;
}
