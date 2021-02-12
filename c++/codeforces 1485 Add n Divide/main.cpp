#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;
    long long a,b,answer,count;
    while(t--)
    {
        answer=LONG_LONG_MAX;
        cin>>a>>b;
        for(long long p=0;p*p<=a;p++)
        {
            if(b==1 and p==0)
                continue;
            count=p;

            long long div=a;
            while(div)
            {
                div/=(b+p);
                count++;
            }
            answer=min(answer,count);
        }
        cout<<answer<<endl;
    }
    return 0;
}
