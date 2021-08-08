#include<bits/stdc++.h>
using namespace std;


int ncr(int n, int r)
{
    if(r==0 || n==r)
        return 1;
    else
    {
        return (ncr(n-1,r-1)+ncr(n-1,r));
    }
}

//Memoisation for Fibonacci

vector<int> memo(100,-1);

int fib(int t)
{

    if(t<=1)
    {
        memo[t] = t;
        return t;
    }
    else
    {
        if(memo[t-2]==-1)
        {
            memo[t-2] = fib(t-2);
        }
        if(memo[t-1]==-1)
        {
            memo[t-1] = fib(t-1);
        }
        memo[t] = memo[t-2]+memo[t-1];
        return memo[t-2]+memo[t-1];
    }


}

int main()
{
int t;
    cin>>t;
    cout<<fib(t)<<endl;
    cout<<ncr(10,3);
}