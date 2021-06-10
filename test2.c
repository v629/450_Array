#include<stdio.h>
int main()
{
    int m,p,c,pt;
    printf("enter the marks of maths:-\n");
    scanf("%d",&m);
    printf("enter the marks of phy:-\n");
    scanf("%d",&p);
    printf("enter the marks of che:-\n");
    scanf("%d",&c);
    if(m > 35 && p > 35  && c > 35)
    {
        pt=(m+p+c)/3;
         printf("passed with %d  percentage\n",pt);


    }
     else {
               printf("faild\n");   }

            return 0;
}
   /* else if(p<35)
    {
        printf("failed");
    }
    else if(c<35)
    {
        printf("failed");
    }*/
  /* else if(m==35)
    {
        printf("passed");
    }
     else if(p==35)
    {
        printf("passed");
    }
     else if(c==35)
    {
        printf("passed");
    }*/

