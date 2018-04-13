
double myPow(double x, int n) {
   
    
    int sign = n < 0;
    int i;
    double result = 1;
    
    
    n = sign ? -1*n : n;
    
    
    for(i=0;i<n;i++){
        
        result  =  sign ?  result/x : result*x;
        
        if(result ==0) break;
        
        if(result ==1) break;
        
        if(result ==-1) break;
    }
    
    
    if(x!=1 && x!=-1 && sign && n<0) return 0;
    
    return result;
    
}
