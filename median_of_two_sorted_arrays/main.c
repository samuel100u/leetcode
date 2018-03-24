double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    
    
    int dst = (nums1Size + nums2Size  )/2;
    int even = (nums1Size + nums2Size  ) %2 ==0;
    double ans[dst+1];
    int i1,i2;
    int p;
    
    for(i1=0,i2=0,p=0;p<dst+1;p++){
        
        if(i1 == nums1Size){
            
            ans[p] = nums2[i2];
            i2++;
            
        }else if (i2 == nums2Size){
            
            ans[p] = nums1[i1];
            i1++;
            
        }
        else{
            
            if(nums1[i1] < nums2[i2]){
            
                ans[p] = nums1[i1];
                i1++;
            
            }else{
            
                ans[p] = nums2[i2];
                i2++;
            }   
            
        }
         
        
    }
    
    if(even==1){
        return (ans[dst-1] + ans[dst])/2;
    }
    
    return ans[dst];
    
}