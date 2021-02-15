#include <iostream>

using namespace std;


bool isInversion(int W[],int P[], int n)
{
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(W[i]>W[j] && P[i]<=P[j])
            {
                return true;
            }
        }
    }
    return false;
}


void solve(int W[], int J[], int P[], int n)
{
    int jumps = 0;

    while(isInversion(W,P,n))
    {

        for(int i =0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(W[i]>W[j] && P[i]<=P[j])
                {
                    P[i] = P[i] + J[i];
                    jumps++;
                }
            }
        }

    }
cout<<jumps<<endl;



}

int main() {

    int t;
    scanf("%d",&t);
    cin.ignore();

    while(t--)
    {

        int n;
        scanf("%d",&n);
        cin.ignore();
        int W[n];
        int J[n];
        int P[n];

        for(int i =0;i<n;i++)
        {
            scanf("%d",&W[i]);
            P[i] = i+1;
        }
        for(int i =0;i<n;i++)
        {
            scanf("%d", &J[i]);
        }

        solve(W,J,P,n);

    }
}
