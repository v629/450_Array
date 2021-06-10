#include <stdio.h>
int main() {
    int n;
    printf("enter the size of the array=:\n");
    scanf("%d",&n);
    int  arr[n];
    printf("enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            a++;
        }
        if(arr[i]==1){
            b++;
        }
        if(arr[i]==2){
            c++;
        }
    }
    //FOR PRINTING
    printf("the sorted elements are as follow:\n");
    for(int i=0;i<a;i++){
        printf("0\n","\n");
    }
    for(int i=0;i<b;i++){
        printf("1\n"," \n");
    }
    for(int i=0;i<c;i++){
        printf("2\n","\n");
    }
	// your code goes here
	return 0;
}
