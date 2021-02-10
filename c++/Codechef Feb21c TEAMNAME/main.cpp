#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(string S[], int n)
{

    int count=0;
    vector<string> A;
    char pick;
    string temp;
    for(int i = 0; i<n;i++)
    {
        pick = S[i][0];

       // bool ps = false;

        for(int j =0;j<n;j++)
        {
            if(i!=j) {
                temp = S[j];
                temp[0] = pick;
              /*  for(int k = 0; k<A.size();k++)
                    if(A[k]==temp)
                        ps = true;
                    if(!ps)
                    */
                    A.push_back(temp);
            }
        }
    }

    set<string> U(A.begin(),A.end());

    A.clear();
    A.assign(U.begin(),U.end());

    for(int i = 0;i < n; i++)
    {
        for(int j = 0;j<A.size();j++)
        {
            if(S[i]==A[j])
                A.erase(A.begin()+j);
        }
    }


    string s1,s2;
    string db1,db2;

    if(A.size()>1) {

        for (int i = 0; i < A.size(); i++) {
            s1 = A[i];
            db1 = s1;


            for (int j = 0; j < A.size(); j++)
            {
                if (i != j && s1[0]!=A[j][0]) {
                    s2 = A[j];
                    db2 = s2;
                    char x = s1[0];
                    s1[0] = s2[0];
                    s2[0] = x;
                    bool flag = false;

                    for (int k = 0; k < n; k++) {
                        if (s1 == S[k]) {
                            flag = true;
                            break;
                        }
                    }
                    for (int k = 0; k < n; k++) {
                        if (s2 == S[k] && flag == true) {
                            count++;

                           // cout<<db1<<" "<<db2<<endl;

                        }
                    }
                }
            }
        }
        return count;
    }
    else
        return 0;

}

int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        cin.ignore();
        string S[n];
        for(int i =0;i<n;i++)
            cin>>S[i];

        cout<<solve(S,n)<<endl;
    }
}
