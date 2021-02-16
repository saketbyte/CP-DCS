#include <bits/stdc++.h>


using namespace std;

void missing(int A[],int n)
{
    int diff = A[0];
    sort(A,A+n);

    for(int i =0;i<n;i++)
    {
        if(diff<A[i]-i)
        {
            while(diff<A[i]-i)
            {
                cout<<diff+i<<endl;
                diff++;
            }
        }

    }


}
int main() {


    int A[]={6,7,8,9,10,13,14,16,17,18};
    missing(A,10);
}
