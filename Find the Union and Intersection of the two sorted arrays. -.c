//Array Find the Union and Intersection of the two sorted arrays.
///////////////union///////////////////
/*#include<stdio.h>
#define MAX 11
int main()
{
    int n,n2;
    int a1[MAX],a2[MAX],m=0,n1=0,j,i;
    printf("enter the size 1st array:\n");
    scanf("%d",&n);
     printf("enter the size 2nd array:\n");
    scanf("%d",&n2);
    printf("enter the element of the 1st array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }

    printf("enter the element of the 2nd array\n");
     for(j=0;j<n2;j++)
    {
        scanf("%d",&a2[j]);
    }
    printf("union of two sorted array are:-\n");
while(m<i && n1<j)
{
    if(a1[m]<a2[n1])
    {
        printf("%d\n",a1[m++]);
    }
    else if(a2[n1]<a1[m])
    {
        printf("%d\n",a2[n1++]);
    }
    else
        {
        printf("%d\n",a2[n1++]);
    m++;
    }
}

 while(m<i)
 {
     printf("%d\n",a1[m++]);
 }
  while(n1<j)
 {
     printf("%d\n",a2[n1++]);
 }
/*        printf("the elements of the 1st array are:-");

    for(int i=0;i<n;i++)
    {
        printf("%d\n",a1[i]);
    }printf("the elements of the 2nd array are:-");
    for(int j=0;j<n;j++)
    {
        printf("%d\n",a2[j]);
    }*/

    /*return 0;
}*/
/////intersection//////////////
/*#include<stdio.h>
#define MAX 11
int main()
{
    int n,n2;
    int a1[MAX],a2[MAX],m=0,n1=0,j,i;
    printf("enter the size 1st array:\n");
    scanf("%d",&n);
     printf("enter the size 2nd array:\n");
    scanf("%d",&n2);
    printf("enter the element of the 1st array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }

    printf("enter the element of the 2nd array\n");
     for(j=0;j<n2;j++)
    {
        scanf("%d",&a2[j]);
    }
    printf("Intersection of two sorted array are:-\n");
while(m<i && n1<j)
{
    if(a1[m]<a2[n1])
    {
        m++;
    }
    else if(a2[n1]<a1[m])
    {
        n1++;
    }
    else
        {
        printf("%d\n",a2[n1++]);
    m++;
    }
}*/

 /*while(m<i)
 {
     printf("%d\n",a1[m++]);
 }
  while(n1<j)
 {
     printf("%d\n",a2[n1++]);
 }*/
/*        printf("the elements of the 1st array are:-");

    for(int i=0;i<n;i++)
    {
        printf("%d\n",a1[i]);
    }printf("the elements of the 2nd array are:-");
    for(int j=0;j<n;j++)
    {
        printf("%d\n",a2[j]);
    }*/

/*    return 0;
}*/
