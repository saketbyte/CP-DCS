#include <iostream>

using namespace std;

int question(int A[], int n)
{

    int hash [n+1] = {0};
    int i;
    for( i =0; i<n;i++) {
        if(hash[A[i]]==0)
        hash[A[i]]++;
        else if(hash[A[i]]>=1)
        break;
    }
    return A[i];

}


int main() {

    int n;
    cin>>n;
    int A[n];
    for(int i =0;i<n;i++)
        cin>>A[i];

    cout<<question(A,n)<<endl;
    return 0;
}
