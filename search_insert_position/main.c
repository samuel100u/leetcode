int searchInsert(int* nums, int numsSize, int target) {
    
    
    int i;
    
    
    for(i=0;i<numsSize;i++){

        if(nums[i]==target){
            
            break;
            
        }else if(nums[i]<target){
            
            
        }else{
            
           break;
        }
    
    }
    
    return i;
    
}
