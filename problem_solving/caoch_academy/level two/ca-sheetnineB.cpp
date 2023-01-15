#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e6 + 5;

vector<ll> sieve(){
    vector<bool>pprime(N+1, 1);
    vector<ll>Tprime;
    pprime[0] = pprime[1] = 0;

    for(ll i=2; i<=N; i++){
        if(pprime[i]){
            Tprime.push_back(i*i);
            for(ll j=i+i; j<=N; j+=i)
                pprime[j] = 0;
        }
    }
    return Tprime;
}

int main(){
    FIO

    vector<ll> Tprime = sieve();
    sort(Tprime.begin(), Tprime.end());

    int n;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        if(binary_search(Tprime.begin(), Tprime.end(), x))
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}
