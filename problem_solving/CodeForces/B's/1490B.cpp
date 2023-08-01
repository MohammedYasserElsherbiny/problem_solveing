#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            vec[i]%=3;
            mp[vec[i]]++;

        }
        int ans=0;
       

        while(mp[0]!=mp[1] || mp[1]!=mp[2])
        {
            ans++;
            int mx=max(mp[0],max(mp[1],mp[2]));
            int mn=min(mp[0],min(mp[1],mp[2]));

            if(mx==mp[0])
            {
                mp[0]--;
                // if(mn==mp[1])
                // {
                    
                    mp[1]++;
                // }
                // else
                // {
                //     mp[2]++;
                // }
            }
            else if(mx==mp[1])
            {
                mp[1]--;
                // if(mn==mp[0])
                // {
                //     mp[0]++;
                // }
                // else
                // {
                    mp[2]++;
                //}
            }
            else
            {
                mp[2]--;
                // if(mn==mp[0])
                // {
                    mp[0]++;
                // }
                // else
                // {
                //     mp[1]++;
                // }
            }
        }

        cout<<ans<<'\n';
    }
}