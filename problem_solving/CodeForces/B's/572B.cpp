#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main ()
{
    FIO

    int n,s;
    cin>>n>>s;

    //map<pair<int,int>,char> ds;
    map<pair<ll,char>,ll> mp;
    map <ll,pair<pair<ll,char>,ll>> ans;
    for(ll i=0;i<n;i++)
    {
        char d;
        ll p ,q;
        cin>>d>>p>>q;

        if(d!='B'&&d!='S') continue;

        pair <ll,char> temp;

        temp.first=p;
        temp.second=d;
        
        mp[temp]+=q;
        
        
    }

    vector <ll> stS,stB;

    for(auto par: mp)
    {
        if(par.first.second=='S')
        {
            stS.push_back(-(par.first.first*par.second));
            ans[-(par.first.first*par.second)]=par;
        }
        else
        {
            stB.push_back(-(par.first.first*par.second));
            ans[-(par.first.first*par.second)]=par;
        }
    }


    sort(stS.begin(),stS.end());
    sort(stB.begin(),stB.end());


    //ll i=0;

    //auto itS=stS.begin(),itB=stB.begin();

    

    for(ll i=0;i<2*s;i++)
    {
        //if(i==2*s) break;



        if(i>=s&&!stB.empty()&&i%s<stB.size())
        {
            cout<<ans[stB[i%s]].first.second<<' '<<ans[stB[i%s]].first.first<<' '<<ans[stB[i%s]].second<<'\n';
            //itB++;
            //cout<<par.first.second<<' '<<par.first.first<<' '<<par.second<<'\n';
        }
        else if (i<s&&!stS.empty()&&i%s<stS.size())
        {
            cout<<ans[stS[i%s]].first.second<<' '<<ans[stS[i%s]].first.first<<' '<<ans[stS[i%s]].second<<'\n';
            //itS++;
        }

        //i++;
    }

}