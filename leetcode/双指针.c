#include<stdio.h>

int removeDuplicates(int* nums, int numsSize){
    if(numsSize==0)
        return 0;
    int i=0,j=1;
    for(j=1;j<numsSize;j++){
    if(nums[i]!=nums[j]){
        i++;
        nums[i]=nums[j];
    }
    }
    return i+1;
}

int main(){
        int i;
        int nums[]={1,1,2};
        int len=removeDuplicates(nums,3);
        for(i=0;i<len;i++){
                printf("%d",nums[i]);
        }
        printf("\n");
        return 0;
}

