/*#include<stdio.h>
int main()
{
int a[10],n,i,temp;
printf("enter the array size=\n");
scanf("%d",&n);
printf("enter the array element =\n");
for(i=0;i<n;i++)
{
printf("elements: %d:-",i);
scanf("%d",&a[i]);
}
printf("after rversing array element=\n");
for(i=n-1;i>=0;i--)
{
printf("%d\n",a[i]);
}
return 0;
}*/
 // Recursive C program to reverse an array
/*#include <stdio.h>
#define MAX 100


void rvereseArray(int arr[], int i, int j)
{
int temp;
if (i >= j)
	return;
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
rvereseArray(arr, i+1, j-1);
}


void printArray(int arr[], int n)
{
int i;
for (i=0; i < n; i++)
	printf("%d ", arr[i]);

printf("\n");
}

 int main()
{
int n,arr[MAX];
    printf("enter the element of Array=\n");
    scanf("%d",&n);
    printf("enter the element of array=\n");
	for(int i=0;i<n;i++)
    {
scanf("%d",&arr[i]);
    }
printArray(arr,n);
	printf("Reversed array is =\n");
	rvereseArray(arr,0,n-1);
	printArray(arr,n);


	return 0;
}*/

