#include <iostream>
#include <set>
#include <deque>
#include <utility>
#include  <list>

using namespace std;

#define sq(x) ((x)*(x))

struct point:pair<int,int>
{
    int i;
    point(int x = 0,int y =0):pair<int,int>(x,y),i(-1){ }

};


int main()
{

    int L,W,n,r=100,d = 2*r;
    cin>>L>>W>>n;
    set<point> points;

    typedef set<point>::iterator iter;
    point P;
    list<int> G[n+2];

    for(int i = 1;i<=n;i++)
    {
        cin>>P.first>>P.second;
        P.i = i;

        point Q(P.first-d,P.second-d),R(P.first+d,P.second+d);
        iter l =points.lower_bound(Q),u = points.upper_bound(R);

        for(iter j =l;j!=u;++j)

            if(sq(P.first-j->first) +sq(P.second-j->second)<=sq(d))
                G[i].push_back(j->i),
                        G[j->i].push_back(i);

        if(P.second -r<=0)
            G[i].push_back(0),
                    G[0].push_back(i);

        if(P.second +r>=W)
            G[i].push_back(n+1),
                    G[n+1].push_back(i);


        points.insert(P);
    }

    int visited[n+2];

    for(int i =0;i<n+2;i++)
        visited[i] = 0;

    deque <int> q;

    q.push_back(0);

    while(!q.empty())
    {
        int v = q.front();
        q.pop_front();

        if(visited[v])
            continue;
        else
            visited[v] = 1;

        if(v==n+1)
        {
            cout<<1<<"\n";
            return 0;
        }


        for(list <int>::iterator i = G[v].begin();i!=G[v].end();++i)
            q.push_back(*i);
    }
    cout<<0<<"\n";


    return 0;
}


