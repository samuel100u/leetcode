int backtrace(int *ratings, int *candyArray, int index){


    int i;

    int add = 0;

    candyArray[index] = 1;

    for(i=index;i>=0; i--){

        if(ratings[i]<ratings[i-1] && candyArray[i-1]<= candyArray[i]){
            candyArray[i-1]++;
            add++;
        }else{
            break;
        }

    }

    return add;
}


int candy(int* ratings, int ratingsSize) {
//1 2 3 1 0
    int candyArray[ratingsSize];

    int i;
    int sum = 1;

    candyArray[0] = 1;

    for(i=1;i<ratingsSize;i++){

        if(ratings[i-1] > ratings[i]){
            candyArray[i] = 1;
            if(candyArray[i-1]==1)
            sum += backtrace(ratings,candyArray,i);
        }else if(ratings[i-1] < ratings[i]){
            candyArray[i] = candyArray[i-1]+1;
        }else{
            candyArray[i] = 1;
        }

        if(candyArray[i]<1){
           //sum += backtrace(ratings,candyArray,i);
        }

        sum += candyArray[i];
    }


    return sum;
}
