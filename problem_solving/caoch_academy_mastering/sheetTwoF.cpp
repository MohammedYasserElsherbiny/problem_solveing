#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main ()
{
    FIO

    int n;
    cin>>n;
    vector<string> vec(n);
    map <string,bool> mp;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        mp[vec[i]]=1;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(mp[vec[i]])
        {
            cout<<vec[i]<<'\n';
            mp[vec[i]]=0;
        }
    }
}