#include<bits/stdc++.h>
// Pending to complete
using namespace std;

int main()
{

    char s[] = "samriddhsingh";
    long int H =0;
    int x =0;


    for(int i =0;i<sizeof(s)/sizeof(s[0]);i++)
    {
        x =1;
        x=x<<s[i]-97;

        if(x&H>0)
        {
            cout<<"duplicate "<<s[i]<<endl;
        }
        else
            H = x|H;
    }
}