#include<iostream>
#include<bits/stdc++.h>
using ll = long long;
const ll MAX_SIZE = 1000009;

using namespace std;

vector<ll>haiprm(MAX_SIZE , true);
vector<ll >check(MAX_SIZE);
vector<ll >prime_no_list;
vector<ll> lessthan;

void wow_prime_finder()
{
     int N = MAX_SIZE;
    haiprm[0] = haiprm[1] = false ;


    for (long long int i=2; i<N ; i++)
    {

            if (haiprm[i])
            {
                prime_no_list.push_back(i);

                check[i] = i;
            }
            for (long long int j=0;j < (int)prime_no_list.size() && i*prime_no_list[j] < N && prime_no_list[j] <= check[i];j++)
            {
                haiprm[i*prime_no_list[j]]=false;
                check[i*prime_no_list[j]] = prime_no_list[j] ;
            }



    }

}

int solve(int x, int y)
{

    int i ;
    for(i = 0;i<=x;i++)
    {
        if(prime_no_list[i]>x)
            break;
        if(prime_no_list[i]==x)
        {
            i=i+1;
            break;
        }
    }
    return i;

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
            int count = solve(x, y);
            //cout<<"count"<<count;
            if (count > y)
                printf("Divyam\n");
            else
                printf("Chef\n");
        }

    }
}