#include<stdio.h>
#define MAX 11
    int main()
    {
        int arr1[MAX],arr2[MAX],n1,n2,i,ans;
        printf("enter the size of the array 1:-");
        scanf("%d",&n1);
        printf("enter the size of the array 2:-");
        scanf("%d",&n2);
        printf("enter the array element of 1st array:-");
        for(i=0;i<n1;i++)
        {
            scanf("%d",arr1[i]);
        }
         for(i=0;i<n2;i++)
        {
            scanf("%d",arr2[i]);
        }
        ans=getMedian(arr1,arr2,n1,n2);
        printf("the medium of two array is:-%d",ans);
        return 0;
    }
int getMedian(int arr1[],arr2[],int n,int m)
{
    int i=0;
    int j=0;
    int count;
    int m1=-1,m2=-1;
    if((m+n)%2==1)
    {
        for(count=0;count<=(n+m)/2;count++)
        {
            if(i!=n&&j!=m){
                m1=(arr1[i]>arr2[i]) ? arr2[j++] ;arr1[i++];
            }else if(i<n)
            {
                m1=arr1[i++];
            }else{  m2=arr1[i++];}
        }return m1;
    }

    else{
        for(count=0;count<=(n+m)/2;count++)
        {
            m2=m1;
            if(i!=n && j!=m){m1=(arr1[i]>arr2[j]) ? arr2[j++] : arr1[i++];}
            else if(i<n)
            {
                m1=arr1[i++];
            }else{
            m1=arr1[j++];}
        }
    }return (m1+m2)/2
}
