#include <stdio.h>
#define MAX 11
int pallindrome(int arr[], int n) {
   int i, j, flag = 0;
   for(i = 0, j=n-1; i< n/2, j>=n/2; i++, j--) {
      if(arr[i]!=arr[j]) {
         flag = 1;
         break;
      }
   }
   if (flag == 1)
   return 0;
   else
   return 1;
}
int main() {

   int arr[MAX],i,n;
   printf("enter the size of the array:-");
   scanf("%d",&n);
   printf("enter the array element\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   if(pallindrome(arr, n)) {
        printf("array is pallidrome:-");
        for(i=0;i<n;i++){
      printf("%d\n",arr[i]);}
   }
   else{
       printf("array is not pallidrome:-");
        for(i=0;i<n;i++){
      printf("%d\n",arr[i]);}}
   return 0;
}
