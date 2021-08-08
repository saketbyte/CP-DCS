#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Interval {
    int start, end;
};

bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}


int main()
{

    int n;
    cin>>n;

    Interval A[n];


    for(int i =0;i<n;i++)
    {

            cin>>A[i].start;
            cin>>A[i].end;
    }


    sort(A,A+n,compareInterval);


}