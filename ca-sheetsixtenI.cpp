#include <bits/stdc++.h>
#include <string>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e5+5;
const ll mod = 1e9+7;

int main ()
{
    FIO
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        map<char,int>mp;
        string str,c,p;
        cin>>str>>c>>p;
        for(int i=0;i<n;i++)
        {
            
            if(mp.count(str[i])==0)
            {
                
                mp[str[i]]=c[i]-'0';
            }
            else
            mp[str[i]]=min(c[i]-'0',mp[str[i]]);
            
        }
        ll sum=0;
        bool f=true;
        for(int i=0;i<m;i++)
        {
            if(mp.count(p[i])==0)
            f=false;
           else
           {
             sum+=mp[p[i]];
           }
        }
        if(f)
        {
            cout<<sum<<'\n';
        }
        else
        cout<<"-1\n";

    }

}