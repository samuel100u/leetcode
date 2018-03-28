int myAtoi(char* str) {
    
    int sign = 0;
    int i=0;
    int j=0;
    long long result=0;
    
    
    if(str == 0) return 0;
    
    while(str[i]==' ') str++;
    
    sign = (str[0] == '-' || str[0] == '+' ? 1:0);
  
    i = sign;
    
    while(str[i]!=0 && str[i] >= '0' && str[i]<= '9'){
        
        result = result*10 +  (str[i] - '0');
        
        if(result>=2147483648 && str[0]=='-'){
            return  -2147483648;
        }else if (result > 2147483647){
            return 2147483647;
        }
        i++;
    }
    
    if(str[0]=='-'){
        result  = -1 * result;
    }
    
     return result;
    
}