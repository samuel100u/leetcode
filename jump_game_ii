#include <stdio.h>
#include <string.h>

int jump(int* nums, int numsSize) {
    
    int steps[numsSize];
    int i,j,maxDistance=0;
    
    for(i=0;i<numsSize;i++) steps[i] = numsSize;
    
    steps[0] = 0;
    
    for(i=0;i<numsSize;i++){
        
        int jumpLength = nums[i];
        int startPoint = maxDistance-i;
        
        for(j=startPoint;j<=jumpLength;j++){
            
            if(i+j<numsSize)
                steps[i+j] =  (steps[i+j] > steps[i]+1 ? steps[i]+1 : steps[i+j]);
        }
        
        maxDistance = (maxDistance>jumpLength+i? maxDistance : jumpLength+i);
        
    }
    
    return steps[numsSize-1];
    
}
