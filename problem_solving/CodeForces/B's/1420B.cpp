#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;






int main ()
{
    FIO

    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll>>vec(n);
        for(ll i=0;i<n;i++) cin>>vec[i].first;
        map <ll,ll> mp;
        //ll mx=-IN_MAX;
        for(ll i=0;i<n;i++)
        {
            ll temp=vec[i].first;
            ll ans;
            for(ll i=0;i<=31;i++)
            {
                if((temp>>i)&1) ans=i;
                //else mp[i]=0;
            }
            vec[i].second=ans;
            mp[ans]++;
            //mx=max(vec[i].second,mx);
        }
        
        ll cnt=0;
        for(ll i=0;i<31;i++)
        {
            if(mp[i]>=2)
            {
                cnt+=((mp[i]*(mp[i]-1))/2);
            }
        }
        cout<<cnt<<'\n';

    }
    


}