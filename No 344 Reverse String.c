/*
Write a function that takes a string as input and returns the string reversed.

Example:
Given s = "hello", return "olleh".
*/

char* reverseString(char *s){
	int k = 0;
	int j = strlen(s) - 1;
	char c;
	while(k<j){
		c = s[k];
		s[k] = s[j];
		s[j] = c;
		k++;
		j--;
	}
	return s;
}