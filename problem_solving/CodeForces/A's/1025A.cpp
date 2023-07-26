#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int n;
    cin>>n;

    if(n==1) {
        cout<<"YES";
        return 0;
    }

    map <char,int>mp;

    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        mp[c]++;
    }

    int cnt=0;

    //there is a better sol. by itrating a-z

    for(auto p: mp)
    {
        
        if(p.second==1) cnt++;
    }

    if(cnt==mp.size()) cout<<"NO";
    else cout<<"YES";

}