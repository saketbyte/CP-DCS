#include<iostream>
#include<bits/stdc++.h>




using namespace std;
int total(int A[], int upto, int from) {

int sum =0;

for(int i = from; i<=upto;i++)
    sum=sum+A[i];

return sum;

}

int question(int A[], int n)
{
    int sums[n*(n+1)/2];
    int counter =0;
    for(int  i = 0; i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            sums[counter]=total(A,j,i);
            counter++;
               // sum = sum +A[k];
               //cout<<"sum  i j"<<sum<<" "<<i<<" "<<j<<endl;
        }

    }
    int max =  INT_MIN;
    for(int x =0;x<(n*(n+1)/2);x++)
    {
        if(sums[x]>max)
            max = sums[x];
    }
    return max;

}


int main()
{

    int n;
    cin>>n;

    int A[n];

    for(int i = 0;i<n;i++)

        cin>>A[i];
    cout<<question(A,n);


}