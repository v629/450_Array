// C++ program to merge two sorted
// arrays with O(1) extra space.
//last=20
//i and j are left and right pointers
//m=6
//n=4
#include <stdio.h>
#define MAX 11
// Driver program
int main()
{
int n1,n2,a1[MAX],a2[MAX],i,j;
printf("enter the size of the first array:-");
scanf("%d",&n1);
printf("enter the size of the second array:-");
scanf("%d",&n2);
printf("enter the element of the fist array:-");
for(i=0;i<n1;i++)
{
    scanf("%d",&a1[i]);
}
printf("enter the element of the second array:-");
for(j=0;j<n2;j++)
{
    scanf("%d",&a2[j]);
}
for(i=n2-1;i>=0;i--){
    		/* Find the smallest element greater than ar2[i]. Move all
		elements one position ahead till the smallest greater
		element is not found */
		int j, last = a1[n1-1];
		for (j=n1-2; j >= 0 && a1[j] > a2[i]; j--)
            			a1[j+1] = a1[j];
        		// If there was a greater element
		if (j != n1-2 || last > a2[i])
{
			a1[j+1] = a2[i];
        			a2[i] = last;
        			}
}
printf("elements of the first array are=");
for(i=0;i<n1;i++)
{
    printf("%d\n",a1[i]);
}
printf("elements of  the second array are=");
for(j=0;j<n2;j++)
{
    printf("%d\n",a2[j]);
}
return 0;
}























