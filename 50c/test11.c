//找大富翁 一样的数据输入和处理
//不知道要输入多少个测试样例，不可能输入一次就新建一个数组，目前只能输入一次，输出一次。
#include<stdio.h>

int main(){
		int a[100001];
		int n,m,tmp,k,i;//n为总人数，m为要输出较大数的个数
		while(1){//n为总指针，m为输出指针
				scanf("%d%d",&n,&m);
				if(n==0&&m==0)
						break;
				for(i=0;i<n;i++)
						scanf("%d",&a[i]);
				
				for(i=0;i<n;i++){
						for(k=0;k<n-1;k++){
								if(a[k]<a[k+1]){
										tmp=a[k];
										a[k]=a[k+1];
										a[k+1]=tmp;
								}
						}
				}
			if(n<m)
					m=n;
			for(i=0;i<m;i++)
				printf("%d ",a[i]);
			printf("\n");
		}
	return 0;
}	
