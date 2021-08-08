#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t=1;
    cin >> t;
    int num;
    while(t--){
        int n; cin >> n;
        set<int> unique;
        while(n--) {
            cin >> num;
            if (unique.count(num)) {
                unique.insert(num + 1);
            } else
            {
                unique.insert(num);
            }
        }
        cout << unique.size()<<endl;
    }
    return 0;
}

//hinted