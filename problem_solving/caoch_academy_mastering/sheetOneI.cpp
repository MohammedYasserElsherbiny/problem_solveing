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
        vector <int> vec(n);
        map <int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            mp[vec[i]]=i;
        }
        
        int mx=n;
        //deque<int> ans;
        for(int i=n;i>=1;i--)
        {
            if(mp[i]>=mx)
            {
                continue;
            }
            for(int j=mp[i];j<mx;j++)
            {
                cout<<vec[j]<<' ';
            }
            mx=mp[i];
            
        }
        cout<<'\n';

    }

}