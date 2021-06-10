#include<stdio.h>
#define MAX 11
int main()
{
    int a[MAX],i,n;
    printf("enter the size of the array:-\n");
    scanf("%d",&n);
    printf("enter the array elements :-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("no. of mininmum jumps it will take:-%d\n",solve(a,n));
    return 0;
}
int solve(int a[],int n)
{
    int maxreach,jumps,stepspossible;
    maxreach=a[0];
    jumps=1;
    stepspossible=a[0];
    for(int i=1;i<n;i++)
    {
        if(i==n-1)
            return jumps;
        maxreach=max(maxreach,i+a[i]);
        stepspossible--;
        if(stepspossible==0)
            {
            jumps++;
        if(i>=maxreach)
            return -1;
        stepspossible=maxreach - i;}
    }
}
int max(int x, int y)
{
if(x>y)
return x;
else
return y;
}
