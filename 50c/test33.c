//输入一个符号，打印此符号画正方形，列数给定，行数为列数四舍五入结果
#include<stdio.h>

int main(){
		int len;
		char c;
		int i,k;
		scanf("%c%d",&c,&len);
		int height=(int)((float)len/2+0.5);//1/2和0.5有区别，1和2都是整数，结果为0，写成2.0，1.0则可以。
		printf("%d\n",height);			   //可以用强制类型转化加0.5的方法四舍五入。
		
		for(i=0;i<height;i++){
				for(k=0;k<len;k++){
						if(i==0||i==height-1)
								printf("%c",c);
						else{
								if(k==0||k==len-1)
										printf("%c",c);
								else
										printf(" ");
						}
				}
				printf("\n");
		}
		return 0;
}
