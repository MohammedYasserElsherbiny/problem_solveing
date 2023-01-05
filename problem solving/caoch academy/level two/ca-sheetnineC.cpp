#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e6 + 5;

pair<ll, ll> solve(ll n){

    pair<ll,ll> mx = {0,0};
    for(ll i=2; i*i<=n; i++){
        ll cnt = 0;
        while(n%i == 0){
            n/=i;
            cnt++;
        }
        if(cnt > mx.second)
            mx = {i, cnt};
    }
    if(n>1 && mx.second == 0)mx = {n, 1};
    return mx;

}

int main(){
    FIO;

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        pair<ll,ll>ans = solve(n);
        cout<<ans.second<<'\n';

        ll div = 1;
        for(ll i=0; i<ans.second-1; i++){
            cout<<ans.first<<' ';
            div*=ans.first;
        }
        cout<<n/div<<'\n';
    }
}
