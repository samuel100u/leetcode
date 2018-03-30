char* longestCommonPrefix(char** strs, int strsSize) {
    
    int i;
    int j;
    char *result;
    
    if(strs==0 || strsSize==0) return "";
    
    
    char reference[strlen(strs[0])+1];
    
    strcpy(reference,strs[0]);
    
    
    for(i=1;i<strsSize;i++){

        for(j=0;j<strlen(reference);j++){
            
            if(strs[i][j] != reference[j]){
                
                reference[j] =0;
                break;
            }
        }
    }
    
    
    result = (char*) malloc(sizeof(char)*(strlen(reference)+1));
    
    strcpy(result,reference);
    
    return result;

}