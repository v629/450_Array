/*#include<stdio.h>
#define MAX 10
int main()
{
int a[MAX],n,i;
printf("enter the size of the array:- ");
scanf("%d",&n);
printf("enter the elements of the array:-");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

printf("all negative and positive elements are in parts now:-");
for(i=0;i<n;i++)
{
    printf("%d\n",a[i]);
}
    return 0;
}*/
/*#include<stdio.h>
#define MAX 10
void segregateElements(int arr[], int n)
{
    int temp[n];
    int j = 0;
    for (int i = 0; i < n ; i++)
        if (arr[i] >= 0 )
            temp[j++] = arr[i];
    if (j == n || j == 0)
        return;
    for (int i = 0 ; i < n ; i++)
        if (arr[i] < 0)
            temp[j++] = arr[i];
    memcpy(arr, temp, sizeof(temp));
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\n",arr[i]);
}
int main()
{
    int arr[] = { 1,2,-3,-5,2,7,-9,-11 };
    int n = sizeof(arr)/sizeof(arr[0]);
    segregateElements(arr, n);
    printArray(arr,n);
    return 0;
}*/
