/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//!ARRAY ELEMENT INSERTION!
/*#include <stdio.h>

int main()
{
    int a[20],item,pos,size,i;
    printf("enter the size of array elment=");
    scanf("%d",&size);
    printf("enter array element=");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position of array=");
    scanf("%d",&pos);
    printf("enter the item of array=");
    scanf("%d",&item);
    for(i=size;i>pos;i--)
    {
        a[i+1]=a[i];
     // a[i]=a[i-1];

    }
    a[pos]=item;
size++;
    printf("resultant array is=");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }


    return 0;
}*/
/*
//!ARRAY ELEMENT DELETION!
#include<stdio.h>
int main()
{
int a[20],p,n,i;
printf("enter the array size=");
scanf("%d",&n);
printf("enter the list of array=");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
   }
   printf("enter the number of position=");
   scanf("%d",&p);
   if(p>=n+1)
   {
   printf("!deletion is not possible!");
   }
   else{
    for(i=p-1;i<n-1;i++)
    {
     a[i]=a[i+1];
    }
    }
    printf("enter the resultent array=");
    for(i=0;i<n-1;i++){
        printf("%d\n",a[i]);
    }
   return 0;
   }
*/
/*//!ARRAY ELEMENT UPDATION!
#include <stdio.h>

int main()
{ int n,a[20],pos,ele,i;
    printf("enter the element size=");
    scanf("%d",&n);
printf("enter the element in the array=\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
printf("enter the position of array=");
scanf("%d",&pos);
printf("enter the element of array which is updated=");
scanf("%d",&ele);
a[pos-1]=ele;
printf("resultant array is=\n");
for(i=0;i<n;i++)
{
    printf("%d\n",a[i]);
}

    return 0;
}*/
