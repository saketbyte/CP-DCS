#include<bits/stdc++.h>

using namespace std;


// calculates the sum of x/n! upto n exact terms.

double expo(int x, int n)
{

    static double powered =1,factorial =1;
    double ratio;
    if(n==0)
        return 1;
    ratio = expo(x,n-1);
    powered = powered*x;
    factorial = factorial*n;
    return ratio+powered/factorial;

}







int main()
{
    cout<<expo(1,5);
}