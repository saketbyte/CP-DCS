#include<iostream>


using namespace std;

void solve(){
    int n,k1,k2;
    int w,b;
    cin >> n >> k1 >> k2;
    cin >> w >> b;

    int x,y;
    x = (n - k1);
    y = (n - k2);
    if((k1 + k2) >= w*2 && (x + y) >= b*2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}


int main(){


    int t;
    cin >> t;
    while(t--)
        solve();


    return 0;
}