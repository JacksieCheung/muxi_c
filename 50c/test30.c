//输入两串数字，输入两个数字，分别求数字在这串数中的个数，以位数组合（如333）
//大概有两种思路，第一是用字符数组接受，以数组形式处理，然后输出时转换
//第二种是用int类型接受，用求余，除十的方式遍历（很重要） 然后求出来个数
#include<stdio.h>

int main(){
		int i,A,B,P1,P2;
		int a=0,b=0;
		int count1=0,count2=0;
		scanf("%d%d%d%d",&A,&P1,&B,&P2);
		//用while进行遍历不需要知道数据的位数（要循环的次数）
		while(A!=0){
				if(A%10==P1)
						count1++;
				A/=10;
		}
		
		while(B!=0){
				if(B%10==P2)
						count2++;
				B/=10;
		}

		for(i=0;i<count1;i++)
				a=a*10+P1;
		for(i=0;i<count2;i++)
				b=b*10+P2;
		printf("%d",a+b);
		return 0;
}
