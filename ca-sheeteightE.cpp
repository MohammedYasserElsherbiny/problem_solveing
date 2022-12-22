#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0),cin.tie(0);
#define ll long long
int ans;
void solve (ll n,ll m,int cnt)
{
    if(n==m)
    ans= cnt;

    if(n>m)
    return ;
    solve (n*2,m,cnt+1);
    solve (n*3,m,cnt+1);
    
}
int main ()
{
    FIO;
    ans=-1;
    ll n,m;
    cin>>n>>m;
    solve(n,m,0);
    cout<<ans;
}