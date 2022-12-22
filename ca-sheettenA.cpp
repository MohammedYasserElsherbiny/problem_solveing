#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e5+5;
const ll mod = 1e9+7;



int main ()
{
    FIO
    ll n;
    cin>>n;
    ll res=1,a=5;
    while (n>0)
    {
        if(n&1)
        res=(res*a)%100;
        a=(a*a)%100;
        n/=2;
    }
    cout<<res;


}