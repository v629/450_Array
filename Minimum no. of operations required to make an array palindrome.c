// C++ program to find number of operations
// to make an array palindrome
#include <stdio.h>
#define MAX 11

// Returns minimum number of count operations
// required to make arr[] palindrome
int findMinOps(int arr[], int n)
{
	int ans = 0; // Initialize result

	// Start from two corners
	for (int i=0,j=n-1; i<=j;)
	{
		// If corner elements are same,
		// problem reduces arr[i+1..j-1]
		if (arr[i] == arr[j])
		{
			i++;
			j--;
		}

		// If left element is greater, then
		// we merge right two elements
		else if (arr[i] > arr[j])
		{
			// need to merge from tail.
			j--;
			arr[j] += arr[j+1] ;
			ans++;
		}

		// Else we merge left two elements
		else
		{
			i++;
			arr[i] += arr[i-1];
			ans++;
		}
	}

	return ans;
}

// Driver program to test above
int main()
{
	int arr[MAX],n,i;
	printf("enter the size of the array:-\n");
	scanf("%d",&n);
	printf("enter the element of the array:-");
	for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Count of minimum operations is %d\n",findMinOps(arr, n));
	return 0;
}
