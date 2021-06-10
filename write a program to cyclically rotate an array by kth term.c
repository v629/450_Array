
#include <stdio.h>
#define MAX ll
int main() {
    int n;
    printf("enter the size of the array:-");
    scanf("%d",&n);
    int arr[n];

    int k;
    printf("enter the kth value:-");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=k%n;
    int ar[n]=0;;
    for(int i=0;i<n;i++){
        ar[a++]=arr[i];
        if(a==n) a=0;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
	// your code goes here
	return 0;
}
