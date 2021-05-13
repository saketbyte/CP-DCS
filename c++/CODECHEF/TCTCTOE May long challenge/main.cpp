#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void solve();

int main()
{
    int t = 0;
    cin>>t;
    while(t--)
        solve();
}


void solve()
{
    string S;
    char A[3][3];
    int n_x=0,n_o=0,win_x=0,win_o=0,n__=0,answer = 3;

    cin>>S;
    for(int i =0;i<3;i++)
    {
        char c = S[i];
        A[0][i] = c;
        if(c=='X')
            n_x++;
        else if(c=='O')
            n_o++;
       else if(c=='_')
            n__++;
    }
    cin>>S;
    for(int i =0;i<3;i++)
    {
        char c = S[i];
        A[1][i] = c;
        if(c=='X')
            n_x++;
        if(c=='O')
            n_o++;
        if(c=='_')
            n__++;
    }
    cin>>S;
    for(int i =0;i<3;i++)
    {
        char c = S[i];
        A[2][i] = c;
        if(c=='X')
            n_x++;
       else if(c=='O')
            n_o++;
       else if(c=='_')
            n__++;
    }


    //conditions for winning of X

    if(A[0][0] == 'X' && A[0][1] == 'X'&& A[0][2] == 'X')
        win_x++;
    if(A[1][0] == 'X' && A[1][1] == 'X'&& A[1][2] == 'X')
        win_x++;
    if(A[2][0] == 'X' && A[2][1] == 'X'&& A[2][2] == 'X')
        win_x++;

    if(A[0][0] == 'X' && A[1][0] == 'X'&& A[2][0] == 'X')
        win_x++;
    if(A[0][1] == 'X' && A[1][1] == 'X'&& A[2][1] == 'X')
        win_x++;
    if(A[0][2] == 'X' && A[1][2] == 'X'&& A[2][2] == 'X')
        win_x++;

    if(A[0][0] == 'X' && A[1][1] == 'X'&& A[2][2] == 'X')
        win_x++;
    if(A[0][2] == 'X' && A[1][1] == 'X'&& A[2][0] == 'X')
        win_x++;



    //conditions for winning of O

    if(A[0][0] == 'O' && A[0][1] == 'O'&& A[0][2] == 'O')
        win_x++;
    if(A[1][0] == 'O' && A[1][1] == 'O'&& A[1][2] == 'O')
        win_x++;
    if(A[2][0] == 'O' && A[2][1] == 'O'&& A[2][2] == 'O')
        win_x++;

    if(A[0][0] == 'O' && A[1][0] == 'O'&& A[2][0] == 'O')
        win_x++;
    if(A[0][1] == 'O' && A[1][1] == 'O'&& A[2][1] == 'O')
        win_x++;
    if(A[0][2] == 'O' && A[1][2] == 'O'&& A[2][2] == 'O')
        win_x++;

    if(A[0][0] == 'O' && A[1][1] == 'O'&& A[2][2] == 'O')
        win_x++;
    if(A[0][2] == 'O' && A[1][1] == 'O'&& A[2][0] == 'O')
        win_x++;




    //Now I want to check whether things are even valid or not.
    // The board will be valid if the number of Xs is at-least equal or only 1 more than the number of Os.
    // The board will be valid if only one of the candidates is winning.


    if((win_x == 1 && win_o ==1) || n_x<n_o || n_x>n_o+1 )
        answer = 3;

    // Now that above condition does not execute so we will deal with other cases which are either win/draw or still playable

    else if(n_x == 0 && n_o == 0  && n__ == 9)
        answer = 2;
    else if(win_x == 0 && win_o == 1 && n_x == n_o)
        answer = 1;
    else if(win_x == 1 && win_o == 0 && n_x > n_o)
        answer = 1;
    else if(win_x == 0 && win_o == 0 && n__ == 0)
        answer = 1;
    else if(win_x == 0 && win_o == 0  && n__ > 0)
        answer = 2;
    else
        answer = 3;

    cout<<answer<<endl;

}
















