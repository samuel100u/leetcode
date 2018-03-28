char* longestPalindrome(char* s) {
    
    int i=0,j=0,left,right,begin=0,end=0;
    int turn = 0;
    
    
    if(s==0) return 0;
    
    for(i=0,j=0;s[j]!=0;){
        
        left = i;
        right = j;
        
        while(left>=0 && s[right] !=0){
            
            if(s[left]==s[right] && right -left > end-begin){
                begin = left;
                end = right;
            }else if(s[left]!=s[right]){
                break;
            }
            left--;
            right++;
        }
        
        i = (turn? i+1:i);
        
        j = (turn? j:j+1);
        
        turn = 1-turn; 
        
    }
    
    char *result = malloc(sizeof(char*) *(end-begin+2));
    
    memcpy(result,s+begin,end-begin+1);
    
    result[end-begin+1] = 0;
    
    
    return result;
    
}