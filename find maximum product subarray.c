// C++ program to find Maximum Product Subarray
#include <stdio.h>

 int min(int x, int y) { return x < y ? x : y; }
 int max(int x, int y) { return x > y ? x : y; }
/* Returns the product of max product subarray.*/
int maxSubarrayProduct(int arr[], int n)
{
	// Initializing result
	int result = arr[0];

	for (int i = 0; i < n; i++)
	{
		int mul = arr[i];
		// traversing in current subarray
		for (int j = i + 1; j < n; j++)
		{
			// updating result every time
			// to keep an eye over the maximum product
			result = max(result, mul);
			mul *= arr[j];
		}
		// updating the result for (n-1)th index.
		result = max(result, mul);
	}
	return result;
}

// Driver code
int main()
{
	int arr[] = { 1, -2, -3, 0, 7, -8, -2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Maximum Sub array product is :-%d",maxSubarrayProduct(arr, n));
	return 0;
}

// This code is contributed by yashbeersingh42
