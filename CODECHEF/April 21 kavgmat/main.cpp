#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define F(i, a, b)        for(int i = a; i<b;i++)
#define w(x)            int x; cin>>x; while(x--)
#define ll              unsigned long long int
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vec              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >


ll R = 0, C = 0, k;

void fastio() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


int main() {
    //fastio();



    w(x) {
        cin >> R >> C >> k;

        ll A[R][C];
        ll count = 0;

        for (ll i = 0; i < R; i++)
            for (ll j = 0; j < C; j++) {
                cin >> A[i][j];
                if (A[i][j] >= k)
                    count++;
            }


        ll aux[R][C];


        for (ll i = 0; i < C; i++)
            aux[0][i] = A[0][i];

        for (ll i = 1; i < R; i++)
            for (ll j = 0; j < C; j++)
                aux[i][j] = A[i][j] + aux[i - 1][j];


        for (ll i = 0; i < R; i++)
            for (int j = 1; j < C; j++)
                aux[i][j] += aux[i][j - 1];


        ll p = min(R, C);

        ll tli, tlj, rbi, rbj, res;

        if (R != 1 && C != 1 && count !=0)  {

            for (ll q = 1; q <= p; q++) {
                for (tli = 0; tli < R - q; tli++) {
                    for (tlj = 0; tlj < C - q; tlj++) {
                        if (tli + q < R)
                            rbi = tli + q;
                        else
                            break;
                        if (tlj + q < C)
                            rbj = tlj + q;
                        else
                            break;
                        res = aux[rbi][rbj];

//
                      if (tli > 0)
                            res = res - aux[tli - 1][rbj];
                        if (tlj > 0)
                            res = res - aux[rbi][tlj - 1];
                        if (tli > 0 && tlj > 0)
                            res = res + aux[tli - 1][tlj - 1];



                        res = res / ((q + 1) * (q + 1));

                        if (res >= k) {
                            count = count + (C - rbj) ;
                            // cout<<R-rbi<<" "<<C -rbj<<" "<<sum<<endl;
                            break;

                        }


                    }
                   /* if(res>=k)
                        break;*/


                }
            }
        }


        printf("%llu \n" ,count);


    }

    return 0;
}
