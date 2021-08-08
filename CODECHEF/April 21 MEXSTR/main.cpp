#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define ff              first
#define ss              second
#define pii             pair<int,int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];



using ll= long long int;
constexpr int limit=(int)1e6;

int Arr[limit+2],Brr[limit+2];
int bit_off[limit],bit_on[limit];

void solve_function_mexstr(){
    ll check_index=-1;

    string X;
    cin>>X;
    ll size_string=X.length();


    for(ll a=0;a<size_string;a++){
        if(X[a] == '0'){
            for(ll b=check_index+1;b<=a;b++)
                bit_off[b]=a;
            check_index=a;

        }
    }
    for(ll a=check_index+1;a<size_string;a++){
        bit_off[a]=size_string;

    }
    if(bit_off[0] == size_string){
        cout<<"0";
        cout<<endl;
        return ;
    }
    check_index=-1;

    for(ll p=0;p<size_string;p++){
        if(X[p] == '1'){
            for(ll q=check_index+1;q<=p;q++)
                bit_on[q]=p;
            check_index=p;

        }
    }
    for(ll i=check_index+1;i<size_string;i++)
        bit_on[i]=size_string;


    Arr[size_string]=Arr[size_string+1]=Brr[size_string]=Brr[size_string+1]=0;

    for(ll i=size_string-1;i>=0;--i){
        Arr[i]=Arr[i+1];

        if(X[i] == '0' && bit_on[i] < size_string)
            Arr[i]=max(Arr[i],Arr[bit_on[i]+1]+1);

        if(X[i] == '1' && bit_off[i] <size_string)
            Arr[i]=max(Arr[i],Arr[bit_off[i]+1]+1);

        Brr[i]=Brr[i+1];
        if(bit_on[i] < size_string)
            Brr[i]=max(Brr[i],Arr[bit_on[i]+1]+1);

    }

    int size2=Brr[0]+1;
    int index_current_pos=bit_on[0]+1;
    string onn="1";
    for(ll i=1;i<size2;++i)
    {
        if(index_current_pos >= size_string){
            onn.push_back('0');
            continue;
        }
        if(bit_off[index_current_pos] >= size_string){
            onn.push_back('0');
            index_current_pos=bit_off[index_current_pos]+1;
            continue;
        }
        if(Arr[bit_off[index_current_pos]+1] <size2-i-1){
            onn.push_back('0');
            index_current_pos=bit_off[index_current_pos]+1;
        }else{
            onn.push_back('1');
            index_current_pos=bit_on[index_current_pos]+1;

        }
    }
    cout<<onn<<"\n";
}

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0),cout.tie(0);

    ll t;
    cin>>t;
    while(t--){
        solve_function_mexstr();
    }
}