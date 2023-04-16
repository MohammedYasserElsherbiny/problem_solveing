#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    int n;
    cin>>n;
    vector<int> vec(n+1,0),pref(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];

        pref[i]=vec[i]+pref[i-1];
    }
    int t;

    cin>>t;
    while (t--)
    {
        int l,r;
        cin>>l>>r;
        l++,r++;

        cout<<pref[r]-pref[l-1]<<'\n';
    }
}