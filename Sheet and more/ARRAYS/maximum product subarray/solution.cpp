class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *A, int n) {

    long long curr_max = 1;
    long long curr_min = 1;
    long long ovmax = A[0];
    
    for(int i =0;i<n;i++)
    {
        if(A[i]==0)
        {
            curr_max = 1;
            curr_min = 1;
            ovmax = max<long long>(0,ovmax);
        }
        else
        {
            long long temp = curr_max;
            curr_max = max<long long>(A[i], max(A[i]*curr_max, A[i]*curr_min));
            curr_min = min<long long>(A[i], min(A[i]*temp, A[i]*curr_min));
            ovmax = max<long long>(ovmax, curr_max);
        }
    }
    
    return ovmax;
    
	}
};