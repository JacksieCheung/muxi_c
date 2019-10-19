//双指针法
int removeElement(int* nums, int numsSize, int val){
    if(numsSize==0)
        return 0;
    int i=0,j=0;
    for(j=0;j<numsSize;j++){//i为慢指针，j为快指针，j遍历，i原地修改
            if(nums[j]!=val)
                nums[i++]=nums[j];
        }
    return i;
}
