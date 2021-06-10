 #include <stdio.h>
#define MAX 11
int main()
{
	int n,a[MAX],i,x;
	printf("enter the size of array:=\n");
	scanf("%d",&n);
	printf("enter the element of the array:=\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
	printf("Given array is\n");
	for (i = 0; i < n; i++)
        {
		printf("%d\n", a[i]);
	}//Logic for cyclically by one
     x = a[n-1];
    for (i = n-1; i > 0; i--)
	a[i] = a[i-1];
     a[0] = x;
    //end logic

	printf("\nRotated array is\n");
	for (i = 0; i < n; i++)
    {printf("%d\n", a[i]);}

	return 0;
}
