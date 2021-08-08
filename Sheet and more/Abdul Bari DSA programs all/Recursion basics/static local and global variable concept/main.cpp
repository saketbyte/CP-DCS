#include<bits/stdc++.h>
using namespace std;
/*
 * Global vs Static Variables


 Global variables are variables which are defined outside the function. The scope of global
 variables begins at the point where they are defined and lasts till the end of the file/program.
 They have external linkage, which means that in other source files, the same name refers to the
 same location in memory.



Static global variables are private to the source file where they are defined and do not conflict
 with other variables in other source files which would have the same name.

Both global, as well as static variables, have static initialization, which means that if you don't
 assign them a value, they will get initialized to 0 (common variables) or NULL (pointers).



This is the only case in ANSI C where you can assume that the value is zero without initializing it explicitly.



Static global variables: Variables declared as static at the top level of a source file
 (outside any function definitions) are only visible throughout that file.


﻿Static local variables: Variables declared as static inside a function are statically allocated,
 thereby keeping their memory cell throughout all program execution, while also having the same
 scope of visibility as automatic local variables. Hence whatever values the function puts into
 its static local variables during one call will remain the same whenever the function is called again.
 */



int showStatic(int n)
{
    static int x =0;
    if(n>0) {
        x++;
        cout << x << endl;
        return showStatic(n - 1) + x ;
    }
    return 0;

}

int glob = 0;
int showGlobal(int n)
{
    if(n>0)
    {
        glob++;
        cout << glob << endl;
        return showGlobal(n-1)+glob;
    }

}

int showLocal(int n)
{
    if(n>0)
    {

        cout << n << endl;
        return showLocal(n-1)+n;
    }
    return 0;

}

int main()
{
    cout<<"STATIC DEMO"<<endl;
    int a = showStatic(5);
    cout<<"static value after call 1 "<<a<<endl;
    cout<<"Notice how the value of x continues after this call instead of restarting from 0, when x becomes 5 at the end of fifth"
          "function call then only we can add it to previous returned value hence 5 x5 =25"<<endl;
    int b = showStatic(5);
    cout<<"static value after call 2 "<<b<<endl;



    cout<<"GLOBAL DEMO"<<endl;
    cout<<"Call 1 "<<showGlobal(5)<<endl;
    cout<<"Call 2 "<<showGlobal(5)<<endl;


    cout<<"LOCAL DEMO"<<endl;

    cout<<"Call 1 "<<showLocal(5)<<endl;
    cout<<"Call 2 "<<showLocal(5)<<endl;


}