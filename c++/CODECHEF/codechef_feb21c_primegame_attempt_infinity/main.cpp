#include<bits/stdc++.h>
#include<iostream>

using namespace std;
const long long int N = 1000005;
long long int less_than[N];
vector<long long int>primeno_list;
void marker()
{
    long long int count = 0;
    auto point = primeno_list.begin();

    for (long long int x = 0; x < N; x++)
    {
        if(*point <= x)
        {
            count++;
            point++;
        }
        less_than[x] = count;
    }
}
void prime_generator()
{
    bool flags[N] ;
    memset(flags, true, sizeof(flags));
    for (long long int m = 2; m * m < N; m++)
    {
        if (flags[m] == true)
        {
            for (long long int l = m * m; l < N; l += m)
                flags[l] = false;
        }
    }
    for (long long int q = 2; q < N; q++)
        if (flags[q])
            primeno_list.push_back(q);

}

void solve(int x, int y)
{
    if(less_than[x] <= y)
        printf("Chef\n");
    else
        printf("Divyam\n");
}

int main()
{

    prime_generator();
    marker();
    int t,x,y;;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        solve(x,y);
    }
    return 0;
}
