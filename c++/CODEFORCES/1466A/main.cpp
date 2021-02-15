#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t=1;
    cin>>t;
    int x;

    while(t--)
    {
        cin>>x;
        int A[x];
        for(int i =0;i<x;i++)
            cin>>A[i];
        double area=0.0;
        vector<double> vec;



        for(int i =0;i<x;i++)
        {
            for(int j=i+1;j<x;j++)
            {
                area = 0.5*(A[i]-A[j]);
                        if(area<0)
                            area= -1*area;
                        vec.push_back(area);
            }
        }

        set<double> s(vec.begin(), vec.end());
        vec.clear();


        //for (auto it = vec.begin(); it !=vec.end(); ++it)
          //  cout<< *it<<" ";

      cout<<s.size()<<endl;
        s.clear();

    }

    return 0;
}
