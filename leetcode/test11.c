#include<stdio.h>
#include<string.h>

int strStr(char*haystack,char*needle){
		int len_n=strlen(needle);
		int len_h=strlen(haystack);
		int i,k,n;
		if(needle[0]=='\0')
				return 0;
		for(i=0;i<len_h;i++){
			if(haystack[i]==needle[0]){//判断字符和n的第一个字符相等,抽出来单独循环
				n=i;
				for(k=0;k<len_n;k++){
				if(haystack[n++]!=needle[k])
						break;
				}
				if(n-i==k)
						return i;
				}
		}
		return -1;
}



int main(){
	char haystack[128]="hello";
	char needle[128]="ll";
	int num=strStr(haystack,needle);
	printf("%d",num);
	return 0;
}
