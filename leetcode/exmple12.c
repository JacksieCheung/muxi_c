#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* longestCommonPrefix(char ** strs, int strsSize){
    if(**strs=='\0')
        return '\0';
    int len=strlen(*strs);
   // printf("%d\n",len);
    int k=0,i=0,n=0;
    for(i=1;i<strsSize;i++){
        if(strlen(*strs+i)>strlen(*strs)){
            len=strlen(*strs+i);
            n=i;
        }
    }
    //len=strlen(*strs);
    int l=len;
    //printf("%d\n",len);
    char*p=(char*)malloc(len*sizeof(char));
    memset(p,0,len);
    p=*strs+n;
    //printf("%s\n",p);
    for(i=0;i<strsSize;i++){
        for(k=0;k<strlen(*strs+i);k++){
            if(p[i]!=strs[i][k])
                   break;
        }
        if(k<len)
            len=k;
    }
    for(i=len;i<l;i++){
	    p[i]='1';
    }
    return p;
}

int main(){
        char strs[3][128]={"flower","flow","flight"};
        int strsSize=3;
        char*ps[3];
        for(int i=0;i<3;i++){
                ps[i]=strs[i];
        }
        char*p=longestCommonPrefix(ps,strsSize);
        printf("%s",p);
        return 0;
}


