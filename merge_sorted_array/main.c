void merge(int* nums1, int m, int* nums2, int n) {
    
    
    int arr[m+n];
    
    int i=0,j=0,k=0;
    
    while(i<m || j<n){
        
        
        if(i>=m){
            
            arr[k] = nums2[j];
            j++;
            k++;
        }
        else if(j>=n){
            
            arr[k] = nums1[i];
            i++;
            k++;
        }
        else if(nums1[i] <= nums2[j])
        {
            
            arr[k] = nums1[i];
            i++;
            k++;
            
        }else if (nums1[i]> nums2[j]){
            
            arr[k] = nums2[j];
            j++;
            k++;
        }
        
    }
    
    memcpy(nums1,arr,4*(m+n));
    
    
    
}
