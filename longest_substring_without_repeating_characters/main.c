int reposition(char *c,int curSize, int index){

    int i = index+1;
    int j = 0;
    while(i<curSize){

        c[j++] = c[i++];
    }

    return j;

}

int lengthOfLongestSubstring(char* s) {


    char c[256] = {};

    int max = 0;

    int curSize = 0;

    while(*s != 0){

        int i=0;
        int repeat = 0;

        for(i=0;i<curSize;i++){

            if(c[i] == *s){
                repeat = 1;
                break;
            }
        }

        c[curSize++] = *s;


        if(repeat == 1)
            curSize = reposition(c,curSize,i);



        if(curSize > max) max = curSize;

        s = s+1;


    }

    return max;


}