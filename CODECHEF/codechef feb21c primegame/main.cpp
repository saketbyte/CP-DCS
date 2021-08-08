#include<iostream>
#include<bits/stdc++.h>
using ll = long long;
const ll MAX_SIZE = 1000006;

using namespace std;

vector<ll>haiprm(MAX_SIZE , true);
vector<ll >check(MAX_SIZE);
vector<ll >prime_no_list;
bool prime[MAX_SIZE + 1];
vector<int>vect;

void wow_prime_finder()
{
     int n = MAX_SIZE;

        memset(prime, true, sizeof(prime));

        for (int p = 2; p * p <= n; p++)
        {
            if (prime[p] == true)
            {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
    for (int p = 2; p < n; p++)
        if (prime[p])
            vect.push_back(p);


}

int solve(int x, int y)
{

    int i ;
    for(i = 0;i<=x;i++)
    {
        if(i>y)
            break;
        if(prime[i]>x)
            break;
        if(prime[i]==x)
        {
            i=i+1;
            break;
        }
    }

    if (i > y)
        printf("Divyam\n");
    else
        printf("Chef\n");

}

int main()
{

    wow_prime_finder();

    int t = 0;
    scanf("%d",&t);
    int x,y;


    while(t--)
    {

        scanf("%d %d",&x,&y);
        if(y==1)
        {
            if(x>2)
                printf("Divyam\n");
            else
                printf("Chef\n");
        }
        else {
            solve(x, y);

        }

    }
}