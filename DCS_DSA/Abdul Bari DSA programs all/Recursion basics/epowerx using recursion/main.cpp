#include <bits/stdc++.h>

using namespace std;


double ex(int x, int n)
{
    static double sum = 1; // static because we want to retain the value out of the function calls as well. We can not have a local variable here.
    if(n==0)
        return sum;
else {
        sum = 1 + ((x * sum) / n);
        return (ex(x, n - 1));
    }

}

int main()
{
    cout<<ex(1,10)<<endl;
}
