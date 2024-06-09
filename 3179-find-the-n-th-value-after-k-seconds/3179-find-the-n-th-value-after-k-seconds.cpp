class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        unsigned long long a[n];
        int r;
        for(int i=0;i<n;i++)
        {
            a[i]=1;
        }
        for(int i=0;i<k;i++)
        {
            for(int j=1;j<n;j++)
            {
                a[j]=(a[j]+a[j-1])% 1000000007;
            }
        }
       r = a[n-1] % 1000000007;
        return r;
    }
};