#include <stdio.h>
int main()
{
	int i, j, temp;
	int a[6] = {9, 7, 5, 3, 1,7};
	int n = 6;  // Initialize n with the array size
	for(i = 0; i < n - 1; i++) {
		for(j = 0; j < n - 1 - i; j++) {
			if(a[j] > a[j+1]) {  // Compare adjacent elements
				// Swapping elements
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	// Print sorted array
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}