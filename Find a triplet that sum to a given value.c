#include <stdio.h>
#define MAX 11
// returns true if there is triplet with sum equal
// to 'sum' present in A[]. Also, prints the triplet
int find3Numbers(int A[], int arr_size, int sum)
{
	int l, r;

	// Fix the first element as A[i]
	for (int i = 0; i < arr_size - 2; i++) {

		// Fix the second element as A[j]
		for (int j = i + 1; j < arr_size - 1; j++) {

			// Now look for the third number
			for (int k = j + 1; k < arr_size; k++) {
				if (A[i] + A[j] + A[k] == sum) {
					printf("Triplet is %d, %d, %d",
						A[i], A[j], A[k]);
					return 1;
				}
			}
		}
	}

	// If we reach here, then no triplet was found
	return -1;
}

/* Driver program to test above function */
int main()
{
	int A[MAX],sum,arr_size,i;
	printf("enter the size of the array:-");
	scanf("%d",&arr_size);
	printf("enter the sum of the array:-");
	scanf("%d",&sum);
	printf("enter the element of the array:-");
	for(i=0;i<arr_size;i++)
    {
        scanf("%d",&A[i]);
    }
	find3Numbers(A, arr_size, sum);
	return 0;
}

