
bool canJump(int* nums, int numsSize) {
    
    int max=0;
    
    int i;
    
    
    for(i=0;i<numsSize;i++){
        
        int jumpLength = nums[i];
        
        int localMax=jumpLength+i;
        
        if(localMax>max) max = localMax;
        
        if(max>=numsSize-1) break;
        
        if(max < i+1) return false;
        
    }
    
    
    return true;
    
}
