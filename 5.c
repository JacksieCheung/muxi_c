#include <stdio.h>
int main()
{
        int n;
		int cnt;
        scanf("%d",&n);
		while(n!=1){
        if(n%2 == 0)
		{
                n = n/2;
				cnt++;
				}
        else
		{
                n=3*n+1;
				cnt++;
				}
		}
		printf("%d",cnt);
		return 0;
		}

