/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.
*/

int hammingDistance(int x, int y){
	int temp = x^y;
	int distance = 0;
	while(temp)
	{
		if((temp>>1)<<1 != temp)
		{
			++distance;
		}
		temp >>= 1;
	}
	return distance;
}