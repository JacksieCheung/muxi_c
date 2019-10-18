#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    if(**strs=='\0')
        return '\0';
    int len=strlen(*strs);
    int k,i,n;
    for(i=1;i<strsSize;i++){
        if(strlen(*strs+i)>strlen(*strs)){
            len=strlen(*strs+i);
            n=i;
        }
    }
    char*p=(char*)malloc(len*sizeof(char));
    memset(p,0,len);
    p=*strs+n;
    for(i=0;i<strsSize;i++){
        for(k=0;k<strlen(*strs+i);k++){
            if(p[k]!=strs[i][k])
                   break;
        }
        if(k<len)
            len=k;
    }
    return p;
}

int main(){
	char strs[3][6]={"flower","flow","flight"};
	int strsSize=3;
	char*ps[3];
	for(int i=0;i<3;i++){
		ps[i]=strs[i];
	}
	char*p=longestCommonPrefix(ps,strsSize);
	printf("%s",p);
	return 0;
}

