#include <iostream>
#include<bits/stdc++.h>

#define For(m,n) for(auto v = m; v < n; v ++ )
#define pb push_back


using namespace std;
// I  have used binary search and merge sort method.

void merge(int arr[],int L,int M,int R)
{
    int n1 = M-L+1;
    int n2 = R-M;

    int l[n1],r[n2];

    for(int i =0;i<n1;i++)
        l[i] = arr[L+i];

    for(int j =0;j<n2;j++)
        r[j] = arr[M+1+j];


    int i = 0, j = 0 , k = L;

    while(i<n1 && j<n2)
    {
        if(l[i]<=r[j])
        {
            arr[k] = l[i];
            i++;
        }
        else
        {
            arr[k] = r[j];
            j++;
        }

        k++;

    }

    while(i<n1)
    {
        arr[k] = l[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k] = r[j];
        j++;
        k++;
    }

}


void mergeSort(int arr[],int l,int r)
{

    if(l>=r)
        return;
    else
    {
        int m = (l+r-1)/2;

        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);

    }

}


int binSearch(int X[], int n, int key)
{
    int l=0;

    int m ;
    int h = n;
    bool flag = false;
    while(l<=h) {
        m = (l+h)/2;

        if (X[m] == key) {
            flag = true;
            break;
        }
        else if (X[m] > key) {
            h=m-1;
        }
        else if(X[m]<key)
        {
            l=m+1;
        }
    }
    if(flag)
        return 1;
    else
        return 0;

}



void question(int A[], int B[], int n1, int n2)
{
    vector <int> U;
    vector<int> I;

        mergeSort(B,0,n2-1);
        mergeSort(A,0,n1-1);

        For(0,n1)
        {
            if(binSearch(B,n2,A[v]))
            {
                I.pb(A[v]);
            }
        }
        For(0,n1)
        U.pb(A[v]);

        For(0,n2)
        {

            if(binSearch(A,n1,B[v]))
                continue;
            else
                U.pb(B[v]);

        }





    set<int> s(U.begin(), U.end());
    for(auto v = s.begin();v!=s.end();v++)
    cout<<*v<<" ";
    cout<<endl;
    set<int> t(I.begin(), I.end());
    for(auto v = t.begin();v!=t.end();v++)
        cout<<*v<<" ";
    cout<<endl;


}




int main() {


    int n1,n2;


    cin>>n1>>n2;
    int A[n1];
    int B[n2];


    For(0,n1)
    {
        cin>>A[v];
    }
    For(0,n2)
    {
        cin>>B[v];
    }
    question(A,B,n1,n2);

    return 0;
}
