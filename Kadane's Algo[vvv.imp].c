//we can use left and right pointer also
#include<stdio.h>
int subwala_logic(int a[], int n){
        int i;
        int max_sum_so_far=0;
        int max_ending_here = 0;

        for(i=0;i<n;i++){
        	max_ending_here = max_ending_here + a[i];

        	if(max_ending_here < a[i]){
        		max_ending_here =a[i];
			}
		    if(max_sum_so_far < max_ending_here){

			  max_sum_so_far = max_ending_here;

			}

		}

return max_sum_so_far;
}


int main(){

	int i,n;

	printf("Enter the size of the array ");
	scanf("%d",&n);

	int a[n];
	printf("\n Enter the elements of the array");
	for(i=0; i<n; i++){

		scanf("%d",&a[i]);
	}


	int Result = subwala_logic(a,n);

    printf("\n The Maximum Sum of the Sub Array is :- %d",Result);


	return 0;
}
