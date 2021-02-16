#include<bits/stdc++.h>

/* It will form a tree recursion because the same function is called multiple times.
 * The solution is based on moving discs based on recursion,
 * for solving 3 disc tower of hanoi we assume we already know 2 disc solution.
 * so
 *      A or 1      B or 2       C or 3
 *
 *
 *    move n-1 discs from A to B by using C
 *    then move a disc from A to C
 *    move n-1 discs from B to C using A
 *    Our function definition basically means
 *    Hanoi(number of discs, source , destination , using);
 *
 */
using namespace std;

void Hanoi(int n, int a, int b, int c)
{
    if(n>0)
    {
        Hanoi(n-1,a,c,b);
        cout<<"Move a disc from "<<a<<"to "<<c<<endl;
        Hanoi(n-1,b,a,c);
    }


}

int main()
{
    Hanoi(7,1,2,3);
}