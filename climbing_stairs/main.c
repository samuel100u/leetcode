int climbStairs(int n) {
    
    int step[n+2];
    
    step[0] = 0;
    
    step[1] = 1;
    
    step[2] = 2;
    
    if(n<3) return step[n];
    
    int i;
    
    for(i=3;i<=n;i++){
        step[i] = step[i-1] + step[i-2];
    }
    
    return step[n];
}
