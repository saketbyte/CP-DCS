#include <bits/stdc++.h>
using namespace std;
vector<int> pos[27];

void solve(){
    string s; cin >> s;
    int n = s.size();
    for(int i = 0; i < 26; i++)
        pos[i].clear();
    for(int i = 0; i < n; i++){
        pos[(int)s[i] - 'a'].push_back(i);
    }
    int l, ns, ans = 0;
    for(int i = 0; i < 26; i++){
        if(pos[i].size() < 2)
            continue;
        l = pos[i][0];
        ns = pos[i].size();
        for(int j = 1; j < ns; j++){
            if(pos[i][j] - l > 2){
                l = pos[i][j];
            }
            else{
                ans++;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}


//someone elses solution