bool isValid(char* s) {
    
    
    int strSize = strlen(s);
    int stack[strSize/2+1];
    int curIndex=-1;
    
    
    if(strSize ==0 || strSize %2 !=0) return 0;
    
    while(*s!=0){
        
        if(*s == '[' || *s == '(' || *s=='{'){
            
            stack[++curIndex] = *s;
            
        }else {
            
            char top;
        
            top = curIndex>-1 ? stack[curIndex] : 0;
            
            switch(top){
                    
                case '{':{
                    
                    if(*s == '}'){
                        
                        curIndex--;
                    }else{
                        
                        return 0;
                    }      
                }break;
                    
                case '(':{
                    
                    if(*s == ')'){
                        
                        curIndex--;
                    }else{
                        
                        return 0;
                    }      
                }break;
                    
                case '[':{
                    
                    if(*s == ']'){
                        
                        curIndex--;
                    }else{
                        
                        return 0;
                    }      
                }break;
                    
                default:
        
                    {
                        
                        return 0;
                    }break;
            }
        }
        s++;
    }
    
    return curIndex==-1;
    
    
}