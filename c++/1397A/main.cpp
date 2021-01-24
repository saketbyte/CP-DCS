#include <iostream>
using namespace std;
int main() {


    int t=1;
    cin>>t;

    int n=0;

    while(t--)
    {

        cin>>n;
        int m=n;
        int A[26]={0};
        while(n--)
        {
            string s="";
            cin>>s;

            for(int i =0;i<s.length();i++)
            {

                A[(int)s[i]-97]++;
            }
        }


        bool glag=true;
        for(int i =0; i< 26; i++)
        {
            if(A[i]%m!=0)
            {
                glag = false;
                break;
            }
        }


        if(glag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
