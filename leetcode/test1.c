#include<stdio.h>

int main(){
	int nums[]={2,7,11,15};
	int target=9;
	int i,k;
	for(i=0;i<3;i++){
		for(k=1;k<4;k++){
			if(nums[i]+nums[k]==target)
				printf("[%d,%d]",i,k);
		}
	}
	return 0;
}
