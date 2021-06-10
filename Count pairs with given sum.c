// pairs with given sum.
#include <stdio.h>
#define MAX 11

// Returns number of pairs in arr[0..n-1] with sum equal
// to 'sum'
int getPairsCount(int arr[], int n, int sum)
{
	int count = 0; // Initialize result

	// Consider all possible pairs and check their sums
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] + arr[j] == sum)
				count++;

	return count;
}

// Driver function to test the above function
int main()
{
	int arr[MAX],sum,i,n;
    printf("enter size of the array:-");
    scanf("%d",&n);
    printf("enter the given sum:-");
    scanf("%d",&sum);
    printf("enter the elements of the array:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
	printf( "Count of pairs is =%d",getPairsCount(arr, n, sum));
	return 0;
}
