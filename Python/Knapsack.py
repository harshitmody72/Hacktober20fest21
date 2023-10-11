# Python Program to implement the Knapsack problem:

def knapSack(W, wt, val, n):
    # Base Case
    if n == 0 or W == 0:
        return 0
 
    # If weight of the nth item is more than Knapsack of capacity W, then we can't include it:
    if (wt[n-1] > W):
        return knapSack(W, wt, val, n-1)
 
    # We will return either the nth item included, or nth item not included:
    else:
        return max(
            val[n-1] + knapSack(
                W-wt[n-1], wt, val, n-1),
            knapSack(W, wt, val, n-1))

profit = [60, 100, 120]
weight = [10, 20, 30]
W = 50
print knapSack(W, weight, profit, len(profit))
