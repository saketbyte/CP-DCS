#include <iostream>
using namespace std;

int main() {

    int t =1;
    cin>>t;


    while(t--)
    {

        string S;

        cin>>S;

        int c=0;
        bool flag = true;
        if(S.length()%2==0)
        {
            for(int i =0;i<S.length();i++)
            {
                char x =S[i];

                if(x=='('||x=='?')
                    c++;
                else
                    c--;

                if(c<0)
                {
                    flag = false;
                    break;
                }
            }
            c=0;
            for(int i =S.length()-1;i>=0;i--)
            {
                char x =S[i];

                if(x==')'||x=='?')
                    c++;
                else
                    c--;

                if(c<0)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        else
            cout<<"no"<<endl;



    }
    return 0;
}




/*
 *if(S[i]=='?')
                {
                    q++;
                }
                if(S[i]==')'&& q<1)
                {
                    flag = false;
                    break;
                }
                else
                {
                    c++;
                    q--;
                }
                if(S[i]=='(')
                    o++;
 */