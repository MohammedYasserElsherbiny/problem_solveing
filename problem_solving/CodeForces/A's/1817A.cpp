#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main ()
{
    FIO

    int n,q;
    cin>>n>>q;
    vector<int> vec(n+5),ans(n+5);
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
    }

    for(int i=2;i<n;i++)
    {
        ans[i]=ans[i-1];
        
        if(vec[i-1]>=vec[i]&&vec[i]>=vec[i+1]) ans[i]++;
        
        
    }

    while (q--)
    {
        int l,r;
        cin>>l>>r;

        //l--,r--;

        if(l==r) cout<<"1\n";
        else cout<<r-l+1-(ans[r-1]-ans[l])<<'\n';
    }

}