//计算元音出现次数
//难点 输入带空格的字符串
//1.用fget（）遇到回车接收一次。如fget（buf,7,stdin）；7表示在缓冲区读前几个，stdin表示缓冲区读取(键盘输入)
//不要用get函数，不安全
//2.用scanf("%[^\n]，buf")也可以，[a,b,c]表示字符组合遇到abc就停止接收。
//[^a]表示除了a以外的所有字符
#include<stdio.h>

int main(){
		int n,k,i,num1=0,num2=0,num3=0,num4=0,num5=0;
		int ch;
		puts("请输入案例个数");
		scanf("%d",&n);
		char a[n][101];
		//fflush(stdin);//但不知道为什么fflush清空缓冲区没有用？？？
		while((ch=getchar())!=EOF&&ch!='\n'){
				;
		}//清空缓冲区，因为前面输入了一个，fgets也接收了，所以要清空
		puts("请输入字符串");
		for(i=0;i<n;i++)
				fgets(a[i],101,stdin);

		for(i=0;i<n;i++){
				for(k=0;k<100;k++){
				switch(a[i][k]){
						case 'a':num1++;break;
						case 'e':num2++;break;
						case 'i':num3++;break;
						case 'o':num4++;break;
						case 'u':num5++;break;
				}
				}
				printf("a:%d\n",num1);
				printf("e:%d\n",num2);
				printf("i:%d\n",num3);
				printf("o:%d\n",num4);
				printf("u:%d\n",num5);
				num1=0;num2=0;num3=0;num4=0;num5=0;
		}
		return 0;
}
