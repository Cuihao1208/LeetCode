/*
Given an array of integers and an integer k, find out whether there are two distinct indices 
i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j 
is at most k.
*/

bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    int i = 0;
    int j = 0;
    int dif = 0;
    int h = false;
    for(i = 0; i < numsSize - 1; i++){
        for(j = i + 1; j< numsSize; j++){
            if(nums[i] == nums[j] && (j-i) < (k+1)){
                h = true;
            }
        }
    }
    return h;
}