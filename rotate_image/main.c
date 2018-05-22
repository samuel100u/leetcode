struct point{ 
    int x;
    int y;
};


void calculate_dst(struct point *ans, struct point o, struct point cur, int width, int jump){
    
    
   int max = o.x + width-1;
    int min = o.x;

    while(jump>0){

        int vx =  cur.x - o.x;
        int vy =  cur.y - o.y;



        if(vx==0 && vy != width-1){

            cur.y += jump;

            jump = (cur.y > max ? cur.y-max : 0);

            cur.y = (cur.y > max ? max : cur.y);

        }else if(vx != width-1  && vy == width-1 ){

            cur.x += jump;

            jump = (cur.x > max ? cur.x -max : 0);

            cur.x = (cur.x > max ? max : cur.x);


        }else if(vx == width-1  && vy != 0){

            cur.y -= jump;

            jump = (cur.y < min ? min-cur.y : 0);

            cur.y = (cur.y < min ? min : cur.y);


        }else if(vx !=0  && vy == 0 ){

            cur.x -= jump;

            jump = (cur.x < min ? min-cur.x : 0);

            cur.x = (cur.x < min ? min : cur.x);

        }


    }

    ans->x = cur.x;
    ans->y = cur.y;
    
    
}


void rotate(int** matrix, int matrixRowSize, int *matrixColSizes) {
    
    int i,j;

    for(i=0;i<matrixRowSize/2;i++){
        
        int jumpSize = (matrixRowSize-2*(i))-1;    
        
        for(j=i;j<i+jumpSize;j++){
            
            int k;
            int backup  = matrix[i][j];
            struct point cur = {i,j};
            struct point o = {i,i};
            
            for(k=1;k<=4;k++){
                
                struct point next;
                
                int temp = backup;
                
                calculate_dst(&next, o, cur, jumpSize+1, jumpSize);
                backup = matrix[next.x][next.y];
                matrix[next.x][next.y] = temp;
                cur.x = next.x;
                cur.y = next.y;
                
            }
        
        }
    
    }
    
    
}
