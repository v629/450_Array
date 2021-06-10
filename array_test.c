#include <stdio.h>
#define MAX 11
int main() {
    int n,k,a,b;
    printf("enter the size of the array:-\n");
    scanf("%d",&n);
    printf("enter the k value of the array:-\n");
 scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++){
          scanf("%d",&arr[i]);
    }
    a= *max_element(arr,arr+n);
    b= *min_element(arr,arr+n);
    printf((a-k)-(b+k));
	// your code goes here
	return 0;
}
