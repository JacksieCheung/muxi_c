//给出一个数据，把数据所有数转换成B（百）S（十）和123...n表示个位。如234 BBSSS1234
//好像用int变量接收更加简洁
#include<stdio.h>
#include<stdlib.h>

int main(){
		int n,len=0,count=0,k=0;
		char output[27]={'\0'};
		int i=0;
		scanf("%d",&n);
		while(n!=0){
			for(i=len;i<len+n%10;i++){
					if(count==0)
							k++;//c没有itoa函数，需通过ASCII码实现
					if(count==1)
							output[i]='S';
					if(count==2)
							output[i]='B';
			}
			if(count==0){
					for(int l=k;l>=0;l--)
							output[l]=k-l+'0';
			}
			len=i;
			count++;
			n/=10;
		}
		for(i=len;i>=0;i--){
		printf("%c",output[i]);
		}
		return 0;
}
