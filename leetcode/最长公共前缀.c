//最长公共前缀

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize==0)//处理空字符串情况
        return "";
    int len=strlen(*strs);
    int k=0,i=0,n=0;
    for(i=1;i<strsSize;i++){
        if(strlen(*(strs+i))>len){
            len=strlen(*(strs+i));//找到字符串中最长的哪一个
            n=i;
        }
    }
    int l=len;
    char*p=(char*)malloc(len*sizeof(char));//申请内存空间用来存放比较的模板字符串
    memset(p,0,len);
    p=*(strs+n);//存放最长字符串作为模板
    for(i=0;i<strsSize;i++){
        for(k=0;k<strlen(*(strs+i));k++){
            if(p[k]!=strs[i][k])
                   break;//当字符不相等时跳出循环
        }
        if(k<len)
            len=k;//记录此时的k（第几个字符不一样）
    }
     for(i=len;i<l;i++){
         p[i]='\0';//把k后的字符全部删除
     }   
    return p;
    }}

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

