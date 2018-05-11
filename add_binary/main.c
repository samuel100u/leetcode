int max(int a,int b){
    
    if(a>b){
        return a;
    }else{
        return b;
    }
    
}


char* addBinary(char* a, char* b) {
    
    
   char *result=0;
    int i,j;

    

    int aLength = strlen(a);
    int bLength = strlen(b);


    char temp[max(aLength,bLength)+2];
    int k = sizeof temp-2;


    int carry =0;

    for(i=aLength-1,j=bLength-1;i>=0&&j>=0;i--,j--){


        int add1 =  (a[i]=='0' ? 0 : 1);
        int add2 =  (b[j]=='0' ? 0 : 1);

        int sum = add1+add2+carry;

        carry =  (sum>=2 ? 1 : 0);

        sum = sum%2;

        temp[k--] = (sum==1 ? '1' : '0');

    }


    for(;i>=0;i--){

        int add1 =  (a[i]=='0' ? 0 : 1);

        int sum = add1+carry;

        carry =  (sum>=2 ? 1 : 0);

        sum = sum%2;

        temp[k--] = (sum==1 ? '1' : '0');
    }

    for(;j>=0;j--){

        int add2 =  (b[j]=='0' ? 0 : 1);

        int sum = add2+carry;

        carry =  (sum>=2 ? 1 : 0);

        sum = sum%2;

        temp[k--] = (sum==1 ? '1' : '0');
    }

    temp[k] =  carry ? '1' : '0';

    k = (temp[0]=='1'? 0 : 1);

    result  = (char*)malloc(sizeof(char)*(sizeof temp - k));

    memcpy(result, temp+k, sizeof(char)*(sizeof temp - k));
    
    result[sizeof temp - k-1] = 0;
    
    return result;
    
}
