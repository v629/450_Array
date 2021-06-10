#include<stdio.h>
#define MAX 11
 void printRepeating(int arr[], int size)
{
	int i;
	printf("The repeating elements are: \n");
for (i=0;i<size;i++)
{
    arr[arr[i]%size]=arr[arr[i]%size]+size;//[]
}for (i=0;i<size;i++)
{


    if(arr[i]/size>1)
    {
        printf("%d\n",i);
    }


}
}

 int main() {
   int arr[MAX],n,i,count=0,j;
   printf("enter the size of the array elements :-");
   scanf("%d",&n);
   printf("enter the elements in array:-\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
for(i=0; i<n; i++){
         for(j=i+1; j<n; j++)
                {

                     if(arr[i] == arr[j]){
                        count++;break;}}}


    printf("\nTotal number of duplicate elements found in array = %d\n", count);

printRepeating(arr, n);
return 0;
}

// C code to find
// duplicates in O(n) time
/*#include <stdio.h>
#include <stdlib.h>

// Function to print duplicates
void printRepeating(int arr[], int size)
{
	int i;
	printf("The repeating elements are: \n");
	for (i = 0; i < size; i++) {
		if (arr[abs(arr[i])] >= 0)
			arr[abs(arr[i])] = -arr[abs(arr[i])];
		else
			printf(" %d ", abs(arr[i]));
	}
}

// Driver Code
int main()
{
	int arr[] = { 1, 2, 3, 1, 3, 6, 6 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	printRepeating(arr, arr_size);
	getchar();
	return 0;
}
*/
