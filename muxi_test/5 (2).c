//模拟手算加法
#include<stdio.h>

int main(){
		int i=0,k=0,l=0;
		int len1=0,len2=0,len3=0,len4=0;
		char a[51]={'\0'};
		char b[51]={'\0'};
		char c[51]={'\0'};
		//输入两个字符串代表两个整数，用a，b接收
		scanf("%s",a);
		scanf("%s",b);
		//求两个字符串长度
		while(a[i]!='\0'){
				len1++;
				i++;
		}
		while(b[k]!='\0'){
				len2++;
				k++;
		}
		//判断哪个数字更长
		if(len1>len2){
				len3=len1;
				for(i=0;i<len3;i++){
						c[i]=a[i];
				}
		}
		else{
				len3=len2;
				for(i=0;i<len3;i++){
						c[i]=b[i];
				}
		}
		//实现加法
		while(1){
				if(len1==0||len2==0)
						break;
				if((a[--len1]-'0')+(b[--len2]-'0')>=10){//通过用-'0'再加上'0'的方法实现字符和整数的转化。
						c[--len3]=((a[len1]-'0')+(b[len2]-'0')-10)+'0';
						c[--len3]++;
						len3++;
				}
				else{
						c[--len3]=((a[len1]-'0')+(b[len2]-'0'))+'0';
				}
		}
		printf("%s",c);
		return 0;
}






