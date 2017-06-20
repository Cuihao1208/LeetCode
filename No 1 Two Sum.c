/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
1
*/

int* twoSum(int *nums, int numsSize, int target){
	int *a = (int*)malloc(2*sizeof(int));
	for (int i = 0; i < numsSize; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			while(nums[i] + nums[j] == target)
			{
				a[0] = i;
				a[1] = j;
			}
		}
	}
	return a;
}