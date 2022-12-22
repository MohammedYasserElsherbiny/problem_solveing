#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO
    ll l,r;
    cin>>l>>r;
    if(r-l+1<3)
    {
        cout<<-1;
        return 0;
    }
    vector <pair<ll,ll>> vec;
    for(ll i=l;i<=r;i++)
    {
        for(ll j=i+1;j<=r;j++)
        {
            if(__gcd(i,j)==1)
            {
                pair <ll,ll> temp;
                temp.first=i;
                temp.second=j;
                vec.push_back(temp);
            }
        }
    }
    int ans=-1;
        // if(vec[i].second==vec[i+1].first)
        // {
        //     if(__gcd(vec[i].first,vec[i+1].second)!=1)
        //     {
        //         cout<<vec[i].first<<' '<<vec[i].second<<' '<<vec[i+1].second;
        //         return 0 ;
        //         ans=1;
        //     }
        // }
    for(ll i=0;i<vec.size()-1;i++)
    {
        for(ll j=i+1;j<vec.size();j++)
        {
            if(vec[i].second==vec[j].first)
            {
                if(__gcd(vec[i].first,vec[j].second)!=1)
                {

                 cout<<vec[i].first<<' '<<vec[i].second<<' '<<vec[j].second;
                 return 0;

                }
            }
        }
    }
    cout<<ans;

}