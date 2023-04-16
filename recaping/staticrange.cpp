#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


const int N=1e5;
int main ()
{
    //FIO

    int n=5;
    vector<int> vec(n+1),pre(n+1),suf(n);
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
    }

    pre[0]=vec[0];
    suf[n-1]=vec[n-1];
    for(int i=1;i<=n;i++)
    {
        pre[i]=pre[i-1]+vec[i];
    }
    // for(int i=n-1;i>=0;i--)
    // {
    //     suf[i]=suf[i+1]+vec[i];
    // }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<pre[i]<<' ';
    // }
    // cout<<'\n';
    // for(int i=0;i<n;i++)
    // {
    //     cout<<suf[i]<<' ';
    // }
    int l,r;
    cin>>l>>r;
    l++,r++;
    cout<<pre[r]-pre[l-1]<<' ';


 	

}