
#include <stdio.h>
int min(int x, int y) { return (x <= y) ? x : y; }
int fsearch(int arr[], int x, int n)
{
	int fs2 = 0; 
	int fs1 = 1; 
	int fs = fs2 + fs1; 	
	while (fs < n) {
		fs2 = fs1;
		fs1 = fs;
		fs = fs2 + fs1;
	}
	int offset = -1;
	while (fs > 1) {
		int i = min(offset + fs2, n - 1);
		if (arr[i] < x) {
			fs = fs1;
			fs1 = fs2;
			fs2 = fs - fs1;
			offset = i;
		}
		else if (arr[i] > x) {
			fs = fs2;
			fs1 = fs1 - fs2;
			fs2 = fs - fs1;
		}
		else
			return i;
	}
	if (fs1 && arr[offset + 1] == x)
		return offset + 1;
	return -1;
}
int main(void)
{
	int arr[]
		= { 10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100,235};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 235;
	int ind = fsearch(arr, x, n);
if(ind>=0)
	printf("Found at index: %d",ind);
else
	printf("%d isn't present in the array",x);
	return 0;
}
