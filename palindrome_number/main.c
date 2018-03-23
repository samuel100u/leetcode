
int mypow10(int i){
    
    int result = 1;
    
    for(;i>0;i--){

        result *= 10;
    }
    
    return result;
}


int isPalindrome(int x) {

    int digit = 0;

    int num = x;

    if(x<0) return 0;

    if(x<10) return 1;


    while(num != 0){

        num /= 10;
        digit++;

    }


    num = x;

    while(digit >= 1){

        int last = num %10;

        int first = num / mypow10(digit-1);


        if(digit == 1 ) return 1;

        if(last!=first) return 0;


        num -= last;

        num -= first*mypow10(digit-1);

        num /= 10;

        digit -= 2;


    }

    return 1;



}