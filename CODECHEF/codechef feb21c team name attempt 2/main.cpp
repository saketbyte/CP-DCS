#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>

using namespace std;

void print(vector<char> a)
{
    for(int i =0;i<a.size();i++)
        cout<<a[i];
}


int solve(vector<char>body1, vector<char>body2)
{
    int answ2 = 0;
    set<char> A(body1.begin(),body1.end());

    for(auto x:body2)
    {
        if(A.end()!=A.find(x))
            answ2++;
    }
    return answ2;
}
int main()
{
    int t_case;
    cin>>t_case;
    while(t_case--)
    {
        string s; int c,n;
        map<string,vector<char>> x;

        cin>>n;
        for(int a = 0; a<n;a++)
        {
            cin>>s;
                x[s.substr(1)].push_back(s[0]);
        }

        int answ = 0;

        for(auto p :x)
        {
            for(auto q:x)
            {
                if(p.first!=q.first)
                {
                    int sstr = solve(p.second,q.second);
                    answ = answ + (p.second.size()-sstr)*(q.second.size()-sstr);
                }
            }
        }
        cout<<answ<<endl;
    }
}
