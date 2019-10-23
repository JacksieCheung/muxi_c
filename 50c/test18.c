//最大子矩阵，M*N大矩阵，x*y小矩阵,小矩阵在大矩阵里面取数，求此小矩阵所能取的最大值
#include<stdio.h>
#include<stdlib.h>

int main(){
		int T,m,n,x,y;
		int i,k,j,l,a,b;
		int sum=0;
		int len=0,max;
		int*ptr=NULL;
		ptr=(int*)malloc(sizeof(int));
		puts("请输入测试案例的组数");
		scanf("%d",&T);
		while(T--!=0){
				puts("请输入大矩阵的行m和列n和小矩阵的行x和列y");
				scanf("%d%d%d%d",&m,&n,&x,&y);
				int large[m][n];
				int small[x][y];
				for(i=0;i<m;i++){
						for(k=0;k<n;k++){
								scanf("%d",&large[i][k]);
						}
				}

				for(i=0;i<m-x;i++){
						for(k=0;k<n-y;k++){//small矩阵左上角的数，每循环一次就单独拉出来做判断
								//small[0][0]=large[i][k];
								for(j=0;j<x;j++){
										for(l=0;l<y;l++){
												small[j][l]=large[i+j][k+l];
										}
								}
								for(a=0;a<x;a++){//左上角的点，每移动一次，计算一次和
										for(b=0;b<y;b++){
												sum+=small[a][b];
										}
								}
												ptr[len]=sum;//计算完和之后再存进动态数组里面
												len++;
												ptr=(int*)realloc(ptr,(len+1)*sizeof(int));
												sum=0;
							}
				}
				for(i=0;i<len;i++)
						printf("%d\n",ptr[i]);
				max=ptr[0];
				for(i=1;i<len;i++){//对数组处理找出最大
						if(ptr[i]>max)
								max=ptr[i];
				}
				printf("%d",max);
		}
		free(ptr);
		return 0;
}
