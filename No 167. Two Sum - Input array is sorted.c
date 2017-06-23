int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int i = 0;
    int j = numbersSize - 1;
    int* returnNums = NULL;
    int sum = 0;
    while(i < j){
        sum = (numbers[i] + numbers[j]);
        if(sum == target){
            returnNums = (int*)malloc(2*sizeof(int));
            returnNums[0] = i + 1;
            returnNums[1] = j + 1;
            *returnSize = 2;
            break;
        }
        if(sum > target){
            j--;
        }
        if(sum < target){
            i++;
        }
    }
    return returnNums;
}