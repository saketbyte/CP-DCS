#include <iostream>

using namespace std;
int main() {


    int t=0,n;
    cin>>t;
    string S,S1;


    while(t--)
    {
        cin>>n;
        cin>>S;
        S1="";

        for(int i=0;i<n;i++)
        {


            if(S[i]=='b') {
                S1 = S1 + S[i];
            //    cout<<"only b"<<endl;
            }

        }
        for(int i=0;i<n;i++)
        {

            if(S[i]!='b') {
                S1 = S1 + S[i];
               // cout<<"addexceptb"<<endl;
            }
        }

        cout<<S1<<endl;
    }
    return 0;
}
