#include<stdio.h>
int main()
{
    int i,j,k,a;
    printf("enter the number :-");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        for(j=30;j>=i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
        {
            printf("*" " ");
        }printf("\n");
    }
    return 0;

}
