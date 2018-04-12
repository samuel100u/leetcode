/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */


char** result = 0;


int validParenthesis(char *a,int n){

    int i;
    int sum=0;


    for(i=0;i<n;i++){

        if(a[i]=='('){
            sum++;
        }else{
            sum--;
        }
        if(sum<0) return 0;
    }

    return sum==0;
}

int generateAllParenthesis(char *a,int curIndex, int n, int *resultSize){

    
        
    if(curIndex==2*n-1){

        if(validParenthesis(a,curIndex+1))
        {
            (*resultSize)++;
            result = (char**)realloc(result,sizeof(char*)*(*resultSize));
            result[(*resultSize)-1] = (char*)malloc(sizeof(char)*(curIndex+1));
            a[curIndex+1] = 0;
            strcpy(result[(*resultSize)-1],a);
        }

    }else{

        curIndex++;

        a[curIndex] = '(';

        generateAllParenthesis(a,curIndex,n,resultSize);

        a[curIndex] = ')';

        generateAllParenthesis(a,curIndex,n,resultSize);
    }
    
    return resultSize;

}

char** generateParenthesis(int n, int* returnSize) {
    
    
    char a[n*2+1] ;
    
    *returnSize =0;
    
    generateAllParenthesis(a,-1,n,returnSize);

    return result;
      
}
