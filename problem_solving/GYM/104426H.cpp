#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int t;
    cin>>t;

    while (t--)
    {
        int n,m;
        cin>>n>>m;

        vector<int> vec(n),vec2(n);
        map<int,int> mp,mp2;

        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            mp[vec[i]]++;
        }

        for(int i=0;i<n;i++)
        {
            cin>>vec2[i];
            mp2[vec2[i]]++;
        }
        // sort(vec.begin(),vec.end());
        // sort(vec2.begin(),vec2.end());
        int ans=0;
        
        for(auto& p: mp2)
        {

            ans+=min(mp[p.first],p.second);


            // if(mp[p.first]>=p.second) ans++;
            // else ans=p.second-mp[p.first];
        }

        cout<<ans<<'\n';


    }
}