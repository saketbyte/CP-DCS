#include<bits/stdc++.h>

using namespace std;


void headRec(int n)
{

    if(n>0)
    {
     headRec(n-1);
        cout<<n<<endl;
    }
}

void tailRec(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        tailRec(n-1);//when the recursive call is the last statement
    }

}


int main()
{
    cout<<"Head"<<endl;
    headRec(5);
    cout<<"Tail"<<endl;
    tailRec(5);
}