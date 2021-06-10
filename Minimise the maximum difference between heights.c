#include<stdio.h>
#define MAX 11
int main()
{
    int n,a[MAX],i,k,ans;
    printf("enter the size of the array:-");
    scanf("%d",&n);
    printf("enter the value of k:-");
    scanf("%d",&k);
    printf("enter the array element:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    ans= getMinimum(a,n,k);
    printf("ans:= %d",ans);
    return 0;
}
int min(int x,int y)
{
    if(x>y)
    {
        return y;
    }
    else{
        return x;
    }
}
int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else{
        return y;
    }
}
int getMinimum(int a[],int n,int k)
{

//sort(a,a+n);
  for (int i = 0; i < n; ++i)
        {

            for (int j = i + 1; j < n; ++j)
            {

                if (a[i] > a[j])
                {

                   int temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;

                }

            }

        }
         int minEle, maxEle;
        int result = a[n - 1]s - a[0];

        for (int i = 1; i <= n - 1; i++) {
          maxEle = max(a[i - 1] + k, a[n - 1] - k);
          minEle = min(a[0] + k, a[i] - k);

          result = min(result, maxEle - minEle);
        }
        return result;


    return result;
}
