#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
#define ll long long
using namespace std;



int main ()
{
    FIO
    ll n,m,k,l,r,d;
    cin>>n>>m>>k;
    vector <ll> vec(n+1);
    vector <ll> pref2(n+2);
    vector <ll> pref1(m+2);
    pair<ll,pair<ll,ll>>op[m+1];
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
    }
    for(int i=1;i<=m;i++)
    {
        
        cin>>l>>r>>d;
        op[i]={l,{r,d}};
    }
    for(int i=1;i<=k;i++)
    {
        cin>>l>>r;
        pref1[l]++;
        pref1[r+1]--;
    }
    for(int i=1;i<=m;i++)
    {
        pref1[i]+=pref1[i-1];
        l=op[i].first;
        r=op[i].second.first;
        d=op[i].second.second;
        pref2[l]+=d*pref1[i];
        pref2[r+1]-=d*pref1[i];
    }
    for(int i=1;i<=n;i++)
    {
        pref2[i]+=pref2[i-1];
        cout<<vec[i]+pref2[i]<<' ';
    }
}