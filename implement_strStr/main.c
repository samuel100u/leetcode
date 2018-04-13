int strStr(char* haystack, char* needle) {
    
    
    int haySize = strlen(haystack);
    
    int needleSize = strlen(needle);
    
    int i,j;
    
    
    
    if(haySize==0 && needleSize==0) return 0;
    
    for(i=0;i<haySize-needleSize+1;i++){
        
        int a = i;
        
        for(j=0;j<needleSize;j++,a++){
            
            if(haystack[a] != needle[j]){
                break;
            }
        }
        
        if(j==needleSize) return i;
        
    }
    
    
    return -1;
}
