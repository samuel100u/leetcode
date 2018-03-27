void swap(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

void quicksort(int *a,int start ,int pivot){

    int i =start-1,j=start;

    if(pivot - start < 1 ) return;

    while(j<pivot){

		if(a[j] <= a[pivot]){

			i++;
			swap(&a[j],&a[i]);
		}
		j++;

	}
    swap(&a[i+1],&a[pivot]);

    quicksort(a,start,i);
    quicksort(a,i+2,pivot);

}

 
int** threeSum(int* nums, int numsSize, int* returnSize) {

    int **result=0;
    int front,back;
    int i = 0;
    int s=0;

    quicksort(nums,0,numsSize-1);

    while(i<numsSize){

        int target = -1*nums[i];

        front = i+1;
        back = numsSize-1;

        while(front < back){

            int sum =   nums[front] + nums[back];

            if(sum>target){
                back--;
            }else if(sum < target){
                front++;
            }else{
                s++;

                result  = (int **)realloc(result,sizeof(int *) * s);
                result[s-1] = (int*) malloc(sizeof(int)* s * 3);

                result[s-1][0] = nums[i];
                result[s-1][1] = nums[front];
                result[s-1][2] = nums[back];
                while( front < back && nums[front] == result[s-1][1]) front++;
                while( front < back && nums[back] == result[s-1][2]) back--;

            }
        }

        while (i + 1 < numsSize && nums[i + 1] == nums[i]) i++;

        i++;

    }
    *returnSize = s;
    return result;
}