#include<stdio.h>

int removeDuplicates(int* nums, int numsSize){
    int k,i,tmp;
    for(i=1;i<numsSize;i++){
        if(nums[i-1]==nums[i]){
            for(k=i;k<numsSize-1;i++){
                tmp=nums[k];
                nums[k]=nums[k+1];
                nums[k+1]=tmp;
            }
            numsSize-=1;
        }
     }
    return numsSize;
}

int main(){
	int i;
	int nums[]={1,1,1};
	int len=removeDuplicates(nums,3);
	for(i=0;i<len;i++){
		printf("%d",nums[i]);
	}
	return 0;
}

