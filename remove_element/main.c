int removeElement(int* nums, int numsSize, int val) {
   
    int i;
    int curIndex = 0;
    
    for(i=0;i<numsSize;i++){
        
        if(nums[i]!=val){
            
            nums[curIndex] = nums[i];
            curIndex++;
        }
        
    }
    
    return curIndex;   
}
