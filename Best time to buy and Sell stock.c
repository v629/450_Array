// C++ implementation of the approach
#include <stdio.h>
#define MAX 11
int max(int x,int y)
{
    if(x<y)
        return y;
    else return x;
}
// Function to return the maximum profit
// that can be made after buying and
// selling the given stocks
int maxProfit(int price[], int start, int end)
{

	// If the stocks can't be bought
	if (end <= start)
		return 0;

	// Initialise the profit
	int profit = 0;

	// The day at which the stock
	// must be bought
	for (int i = start; i < end; i++) {

		// The day at which the
		// stock must be sold
		for (int j = i + 1; j <= end; j++) {

			// If byuing the stock at ith day and
			// selling it at jth day is profitable
			if (price[j] > price[i]) {

				// Update the current profit
				int curr_profit = price[j] - price[i]
								+ maxProfit(price, start, i - 1)
								+ maxProfit(price, j + 1, end);

				// Update the maximum profit so far
				profit = max(profit, curr_profit);
			}
		}
	}
	return profit;
}

// Driver code
int main()
{
	int price[MAX],n,i;
	printf("enter the size of the array:-");
	scanf("%d",&n);
	printf("enter the elements of the array:-\n");
	for(i=0;i<n;i++)
    {
        scanf("%d",&price[i]);
    }

	printf("ans =%d",maxProfit(price, 0, n - 1));

	return 0;
}
