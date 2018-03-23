
int mypow10(int i){
    
    int result = 1;
    
    for(;i>0;i--){

        result *= 10;
    }
    
    return result;
}


int reverse(int x) {


    int sign = 0;
    int digit=0;
    int num = x;
    int result = 0;;

    if(x<0){

        sign = 1;
        x  = x *(-1);
    }

    num =x;

    while(num!=0){

        num = num/10;
        digit++;

    }


    num = x;


    while(num !=0){

        int col = num % 10;
        int product = col * mypow10(digit-1);

        if(product / mypow10(digit-1) != col || result < 0) return 0;

        result = result + product;
        num -= col;
        num /= 10;
        digit--;
    }

    if(sign == 1){
        result *= -1;
    }

    return result;

}
