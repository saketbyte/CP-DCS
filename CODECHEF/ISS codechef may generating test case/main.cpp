#include<bits/stdc++.h>
#include<algorithm>

#define ll long long int
using namespace std;


int main()
{

ll t =0;
cin>>t;
while(t--) {

    ll i =0;
    cin>>i;
    ll answer =0;


        for (ll j = 1; j <= (2 * i); j++)
            answer += __gcd(i + (j * j), (i + (j + 1) * (j + 1)));

        cout<<answer<<endl;


}
}