int maxSubArray(int* nums, int numsSize) {
    
    
    int i;
    
    int result=nums[0];
    
    int sum = 0;
    
    for(i=0;i<numsSize;i++){
        
        sum += nums[i];
        
        if(sum>result) result = sum;
        
        if(sum<0)sum = 0;

    }
    
    return result;
    
}
