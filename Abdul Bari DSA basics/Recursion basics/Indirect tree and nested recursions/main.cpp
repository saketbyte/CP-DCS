#include<bits/stdc++.h>

using namespace std;



//Tree recursion means the function calling itself multiple times like that in fibonacci. Do its dry run to understand even better.

void recTree(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        recTree(n-1);
        recTree(n-1);
    }
}

// Indirect recursion is when we call one function which again calls some other function.

void inRec2(int n);
void inRec1(int n)
{
    if(n>0)
    {
        cout<<"Rec 1 "<<n<<endl;
        inRec2(n-1);
    }
}

void inRec2(int n)
{
    if(n>0)
    {
        cout<<"Rec 2 "<<n<<endl;
        inRec1(n/2);
    }
}

//Nested Recursion occurs when the recursive call takes another recursive call. Like Call a call.
int nest(int n)
{
    if(n>0)
    {
        cout<<"Nested "<<n<<endl;
        return nest(nest(n-2));

    }
}
int main() {


    cout<<"TREE RECURSION:"<<endl;
    recTree(3);
    cout<<"INDIRECT RECURSION"<<endl;
    inRec1(9);
    cout<<"NESTED RECURSION"<<endl;
    nest(6);

}
