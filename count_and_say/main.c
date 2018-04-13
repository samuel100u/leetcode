char* countAndSay(int n) {
    
    if(n==1){
        
        char *s = (char*)malloc(sizeof(char)*2);
        s[0] = '1';
        s[1] = 0;
        return s;
    }
    
    int i;
    
    char *s = countAndSay(n-1);
    
    int strLength = strlen(s);
    
    char *result = 0;
    
    int resultLength = 1;
    
    for(i=0;i<strLength;){
        
        char c = s[i];
        
        int b = i;
        
        while(c==s[i]) i++;
        
        int count = i-b;
        
        resultLength +=2;
        
        result = realloc(result,sizeof(char)*resultLength);
        
        result[resultLength-3] = count+'0';
        result[resultLength-2] = c;
        
    }
    
    
    result[resultLength-1] = 0;
    
    free(s);
    
    return result;
    
}
