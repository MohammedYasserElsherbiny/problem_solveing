#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main ()
{
    FIO

    int n;
    cin>>n;
    vector<ll> vecv(n);
    vector<ll> vecu(n);
    for(ll i=0;i<n;i++) cin>>vecv[i];
    vecu=vecv;
    sort(vecu.begin(),vecu.end());
    vector<ll> ansu(n+1),ansv(n+1);
    ansu[0]=0;
    ansv[0]=0;
    for(int i=1;i<=n+1;i++)
    {
        ansu[i]=vecu[i-1]+ansu[i-1];
        ansv[i]=vecv[i-1]+ansv[i-1];
    }
    ll m;
    cin>>m;
    while (m--)
    {
        ll type,l,r;
        cin>>type>>l>>r;
        if(type==1)
        {
            cout<<ansv[r]-ansv[l-1]<<'\n';
        }
        else
        {
            cout<<ansu[r]-ansu[l-1]<<'\n';
        }

    }





}