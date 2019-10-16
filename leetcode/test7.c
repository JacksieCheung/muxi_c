bool isValid(char * s){
    if(s[0]=='\0')
        return 1;
    if(s[0]==')'||s[0]==']'||s[0]=='}')
        return 0;
    int len=strlen(s);
    if(len%2!=0)
        return 0;
    int i,k=0;
    char tmp[len+1];
    for(i=0;i<len;i++){
        switch(s[i]){
            case '(':tmp[k]=s[i],k++;break;
            case '[':tmp[k]=s[i],k++;break;
            case '{':tmp[k]=s[i],k++;break;
            case ')':{
                if(tmp[k-1]!='(')
                    return 0;
                else
                    k--;
            };break;
            case ']':{
                if(tmp[k-1]!='[')
                    return 0;
                else
                    k--;
            };break;
            case '}':{
                if(tmp[k-1]!='{')
                    return 0;
                else
                    k--;
            };break;
        }
}
    if(k==0)
        return 1;
    return 0;
}
