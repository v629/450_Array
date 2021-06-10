#include<stdio.h>

int main()
{
    int temp,num,k,a[20],i,j,c;
    printf("enter the size of the element :- \n");
    scanf("%d,%d",&num);
    printf("the elements in the arrays are=\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
         for(j=i+1;j<num;j++)
      {
        if(a[i]>a[j])
            {
                temp=a[j];a[j]=a[i];a[i]=temp;
            }
        }
    }
for(int i=0;i<num;i++)
    printf("%d ,",a[i]);
printf("\nenter the kth element in an array=:-");
scanf("%d",&k);
printf("largest element in array: -%d\n",a[(num)-k]);
printf("enter the smallest element :- ");
scanf("%d",&k);
printf("smallest element is: -%d\n",a[k-1]);

    //printf("enter the kth element:- \n");
    //scanf("%d",&k);
//for (i=0;i<num;i++)
//{
//printf("\nkth largest elements=%d",a[i]);
//}
return 0;
}

