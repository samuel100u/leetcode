int abs(int a){
    
    if(a<0){
        
        return -1*a;
    }else{
        
        return a;
    }
    
}
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int threeSumClosest(int* nums, int numsSize, int target) {
    
    int i;
    
    int result = nums[0]+nums[1]+nums[2];
    int flag=0;
    
    qsort(nums, numsSize, sizeof(int), cmpfunc);

    
    for(i=0;i<numsSize-2;i++){
        
        int front,end;
        int pre = result;
        front = i+1;
        end = numsSize-1;
        
        while(front<end){
            
            int sum = nums[i] + nums[front] + nums[end];
            
            
            if(sum == target){
                return sum;
            }else if(abs(sum-target)>=abs(result-target)){
                
            }else if(abs(sum-target)<abs(result-target)){
                result = sum;
            }
            
            if(sum-target>0){
                end--;                
            }else{
                front++;
            }
            
            
        }
        
        while(nums[i] == nums[i+1]) i++;
       
        
        
        
    }
    
    return result;
    
    
    
    
}