/*
Given an array of 2n integers, your task is to group these integers into n pairs of integer, 
say (a1, b1), (a2, b2), ..., (an, bn) 
which makes sum of min(ai, bi) for all i from 1 to n as large as possible.
*/

int arrayPairSum(int* nums, int numsSize) {
    int i = 0,j = numsSize - 1;
    int sum = 0;
    
    void sort(int i, int j, int* sums);
    sort(0, numsSize - 1, nums);
    
    for(int h = 0; h < numsSize; h = h+2){
        sum += nums[h];
    }
    return sum;
}

void sort(int i, int j, int* nums){
    int low = i;
    int high = j;
    int key = nums[i];
    int temp = 0;
    
    if(i>j){
        return ;
    }
    while(i<j){
        while(nums[j]>key && i<j){
            j--;
        }
        nums[i] = nums[j];
        while(nums[i]<=key && i<j){
            i++;
        }
        nums[j] = nums[i];
    }
    
    nums[i] = key;
    sort(low,i-1,nums);
    sort(i+1,high,nums);
}