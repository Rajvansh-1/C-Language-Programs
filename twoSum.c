int* (int* nums, int numsSize, int target, int* returnSize){
    int* returnArr = (int*)malloc(2*sizeof(int));
    for(int i=0; i<numsSize-1; i++){
        for(int j=i+1; j<numsSize; j++){
            if(nums[i]+nums[j] == target){
                *returnArr = i;
                *(returnArr+1) = j;
                printf("%d %d", *returnArr, *(returnArr+1));
                return returnArr;
            }
        }
    }        
    return NULL;
}
