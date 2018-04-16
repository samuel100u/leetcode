int* plusOne(int* digits, int digitsSize, int* returnSize) {
    
    int moreDigit  = 1;
    int *result = 0;
    int i;
        
    for(i=0;i<digitsSize;i++){
        
        if(digits[i] != 9){
            
            moreDigit = 0;
            break;
        }
    }
    
    result = (int*)malloc(sizeof(int)*(digitsSize+moreDigit));
    
    
    if(moreDigit){
        
        result[0] =  1;
        memset(result+1,0,digitsSize*4);
        
    }else{
        
        int carry = 1;
        
        for(i=digitsSize-1;i>=0;i--){
            
            if(digits[i]+carry==10){
                
                carry = 1;
                
                digits[i] = 0;
                
            }else{
                
                
                digits[i] += carry;
                carry = 0;
            } 
        }
        
        memcpy(result,digits,digitsSize*4);
    }
    
    *returnSize = digitsSize+moreDigit;

    return result;
}
