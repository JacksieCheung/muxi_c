#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void longestCommonPrefix(char ** strs, int strsSize){
   // if(**strs=='\0')
     //   return '\0';
    int len=strlen(*strs);
   // printf("%d\n",len);
    int k=0,i=0,n=0;
    //printf("strsSize=%d\n",strsSize);
	
//测试if语句的问题
	//for(i=0;i<3;i++)
		//printf("strlen=%ld\n",strlen(*(strs+i)));
						
    for(i=1;i<strsSize;i++){
        if(strlen(*(strs+i))>len){//if条件没有起到作用，判断strlen的指针结果。
            len=strlen(*(strs+i));//strlen参数为指针是可以的，确实进入了循环，不清楚为什么n为什么没有被赋值。
            n=i;				//最后发现原来还是*和+i的问题，还是指针的访问的问题。*(strs+i)表示的是遍历子字符串，而*strs+i表示的是子字符串的字符往后移i位。(*strs表示指向第一个子字符串第一个字符的指针
        }						//*strs+i表示指向第一个字符的指针往后移动i位。)
    }
    //printf("i=%d\n",i);
    //printf("n=%d\n",n);
    //len=strlen(*strs);
    int l=len;
    //printf("len=%d\n",len);
    char*p=(char*)malloc(len*sizeof(char));
    memset(p,0,len);
    p=*(strs+n);
    //printf("p开始=%s\n",p);


    for(i=0;i<strsSize;i++){//i从0开始
        for(k=0;k<strlen(*(strs+i));k++){
				//printf("k_t=%d\n",k);
            if(p[k]!=strs[i][k]){
					printf("%c!=%c\n",p[i],strs[i][k]);
                   break;
			}
        }
		//printf("chang=%ld\n",strlen(*(strs+i)));
		//printf("d=%d\n",d);
		printf("k1=%d\n",k);//这里开始k=0
        if(k<len){
			printf("k2=%d\n",k);
            len=k;
    }
	}
	printf("len2=%d\n",len);//这个地方len出了问题

//测试strs能否用成二维数组  测试结果：成立
	for(i=0;i<3;i++)
			printf("strs[%d]=%s\n",i,strs[i]);

	printf("strs[0][0]=%c\n",strs[0][0]);



    printf("p结束=%s\n",p);
    for(i=len;i<l;i++){
            p[i]='\0';
    }
    printf("p最后=%s\n",p);
   // return p;
}

int main(){
	char strs[3][128]={"flow","flight","flower"};
	int strsSize=3;
	char*ps[3];
	for(int i=0;i<3;i++){
                ps[i]=strs[i];
        }
	longestCommonPrefix(ps,strsSize);
       // char*p=longestCommonPrefix(ps,strsSize);
       // printf("%s",p);
        return 0;
}
