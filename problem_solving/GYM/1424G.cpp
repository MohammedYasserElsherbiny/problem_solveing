#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;

ll N=1e9 +5;


int main ()
{
    FIO

    int n;
    cin>>n;


    int a,b;


    map <int,int> mp;

    

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;

        mp[a]++;
        mp[b]--;
    }


    vector<pair<int,int>> v(mp.begin(),mp.end());

    for(int i=1;i<v.size();i++)
    {
        v[i].second+=v[i-1].second;
    }


    pair <int,int> ans={-1,-1};

    for(auto p:v)
    {
        if(p.second>ans.second)
        {
            ans.first=p.first;
            ans.second=p.second;
        }
    }

    cout<<ans.first<<' '<<ans.second;


}