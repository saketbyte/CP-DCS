
int minSwap(int *arr, int n, int k) {

// counting elements less equal to k which will be the maximum swaps necessary to bring them together.
int small = 0;
for(int i = 0;i<n;i++)
if(arr[i]<=k)
small++;
//counting greater than k elements currently in the first window
int bad = 0;
    for (int i = 0; i < small; ++i)
        if (arr[i] > k)
            bad++;
            
        
int min_swap =bad;
int j =small;
int i = 0;

// sliding over the full array and choosing the window needing minimum swaps based on the changes made in the window due to
//change in number of greater than k elements.

while(j<n)
{
     if (arr[i] > k)
            --bad;
          
        if (arr[j] > k)
            ++bad;
    
        min_swap = min(min_swap, bad);
        i++;j++;
    
}

return min_swap;