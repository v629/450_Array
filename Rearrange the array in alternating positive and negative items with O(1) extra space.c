#include<stdio.h>
#define MAX 11
int main()
{
    int arr[MAX],j,n;
 printf("enter the size of the array:-\n");
 scanf("%d",&n);
 printf("enter the array element:-\n");
 for(int i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
 }
printf("given array is:-");
     printArray(arr, n);
    rearrange(arr, n);
printf("Rearranged  array is:-");
    printArray(arr, n);

return 0;
}
void swap(int arr[], int index1, int index2)
{
	int c = arr[index1];
	arr[index1]=arr[index2];
	arr[index2]=c;
}
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d\n",arr[i]);

}
void rearrange(int arr[], int n)
{
	int i = 0, j = n - 1;

	// shift all negative values to the end
	while (i < j)
	{
		while(i <= n - 1 && arr[i] > 0)
			i += 1;
		while (j >= 0 && arr[j] < 0)
			j -= 1;
		if (i < j)
			swap(arr, i,j);
	}

	// i has index of leftmost negative element
	if (i == 0 || i == n)
		return;

	// start with first positive
	// element at index 0

	// Rearrange array in alternating positive &
	// negative items
	int k = 0;
	while (k < n && i < n)
	{
		// swap next positive element
		// at even position
		// from next negative element.
		swap(arr,k,i);
		i = i + 1;
		k = k + 2;
	}
}
