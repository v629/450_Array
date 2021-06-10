#include<stdio.h>
#include<string.h>

int main()
{
int i,g=0,r=0,c,n;
 scanf("%d",&n);
 char a[n];
 scanf("%s",a);
 for(i=0;i<n;i++)
 {
     if(a[i]=='R')
        r++;
     else if(a[i]=='G')
        g++;

 }
 if(r>g)
 printf("%d\n",g);
 else
    printf("%d\n",r);
 return 0;
}
/*for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
count1=0;
for(i=0;i<n;i++)
{
    if(a[i]==0)
    {
       count1++;
    }
}
count2=0;
for(i=0;i<n;i++)
{
    if(a[i]==1)
    {
       count2++;
    }
}
int ans;
ans=count1-count2;
printf("%d",ans);
printf("ans=\n",abc(s1,s2));

return 0;
}
/*
int abc(String s1,String s2)
{
    int count1[char]={0},count2[char]={0};
    for(int i=0,s1[i]!='\0',i++)
    {
        count1[s1-'a']++;

    }for(int i=0,s2[i]!='\0',i++)
    {
        count2[s2-'a']++;

    }
int ans=0;
for(i=0;i<10;i++)
{
    ans+=count1[i]-count2[i];
}return ans;
}
*/
