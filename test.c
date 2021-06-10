#include<stdio.h>

int main()
{
    int income ,day,overtime,h,ot,s;
    printf("enter the hours:-\n");
    scanf("%d",&h);
    overtime=h-8;
    ot=20*overtime;
    s=200+ot;
    printf("%d",s);
    return 0;
}
