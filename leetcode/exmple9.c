#include<stdio.h>

int removeDuplicates(int* nums, int numsSize){
	int k,i,tmp,v,b,count=0;
	if(numsSize==0)
		return 0;
//	if(nums[0]==nums[numsSize-1])
//		return 1;
//	if(nums[numsSize-1]==nums[numsSize-2])
//		count+=3;
    	for(i=0;i<numsSize-1;i++){
	    for(k=i+1;k<numsSize;k++){
		    if(nums[i]==nums[k])
		    count++;
		    if(nums[i]!=nums[k])
			    break;
	}
	    if(count>0){
	    for(b=0;b<count;b++){
		    for(v=i+1;v<numsSize-1;v++){
			    tmp=nums[v];
			    nums[v]=nums[v+1];
			    nums[v+1]=tmp;
		    }
		   numsSize-=1;
	   	 }
	 }
	 count=0;
}

    return numsSize;
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

