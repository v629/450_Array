#include <stdio.h>
int max(int a, int b) {
   if(a > b)
       return a;
    else
        return b;
    }
int knapSack(int W, int wt[], int val[], int n)
{
if (n == 0 || W == 0)
		return 0;
if (wt[n - 1] > W)
		return knapSack(W, wt, val, n - 1);
	else
		return max(
			val[n - 1]
				+ knapSack(W - wt[n -1],
						wt, val, n - 1),
			knapSack(W, wt, val, n - 1));
}
int main()
{
	int val[] = { 280, 100, 120,120 };
	int wt[] = { 40,10,20, 24 };
	int W = 60;
	int n = sizeof(val) / sizeof(val[0]);
	printf("%d", knapSack(W, wt, val, n));
	return 0;
}
