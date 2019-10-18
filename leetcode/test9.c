#include<stdio.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    if(**strs=='\0')
        return '\0';
    int len=strlen(*strs);
    int k,i,n;
    for(int i=1;i<strsSize;i++){
        if(strlen(*strs+i)>strlen(*strs)){
            len=strlen(*strs+i);
            n=i;
        }
    }
    char*p=(char*)malloc(len);
    memset(*p,'\0',len);
    p=*strs+n;
    for(i=0;i<strsSize;i++){
        for(k=0;k<len;k++){
            if(p[k]!=strs[i][k])
                   break;
        }
        if(k<len)
            len=k;
    }
    return strs;
}


