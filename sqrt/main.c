int mySqrt(int x) {
    
    
    int l=0,r=x;
    
    if(x==1) return 1;
    
    while(l < r-1){
        
        int mid = (l+r)/2;
        int ratio = x/mid;
                
        if(ratio<mid) r = mid;
        else if(ratio>mid) l=mid;
        else return mid;
 
    }
    
    return l;
    
}
