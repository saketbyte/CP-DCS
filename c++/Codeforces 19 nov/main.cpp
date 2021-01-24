#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n=0,x=0,y=0,t=0;

    cin>>t;
    while(t--)
    {
       cin>>x>>y;

       if(x==y)
           n=x*2;
       else if(x>y)
           n=(2*x)-1;
       else
           n=(2*y)-1;

       cout<<n<<endl;

    }


    return 0;
}
