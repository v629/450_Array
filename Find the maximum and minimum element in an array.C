#include<stdio.h>
#define MAX 100
int main()
{
int a[MAX],n,i,j,max,min;
printf("enter the size of array=\n");
scanf("%d",&n);
printf("enter the elements in an array=\n");
for(i=0;i<n;i++)
{
    printf("element :%d:-",i);
    scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<n;i++)
{
    if(a[i]>max)
{
    max=a[i];
}
else if(a[i]<min)
{
     min=a[i];
}
}printf("maximum number is =%d\n",max);
printf("minimum number is =%d\n",min);
return 0;
}
