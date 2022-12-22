#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;

int ans;

void solve (int n,int m,int cnt)
{
    if(n==m)
    ans=cnt;

    if(n>m)
    return ;

    solve(n*3,m,cnt+1);
    solve(n*2,m,cnt+1);

}




int main ()
{
    FIO

    int n,m,cnt=0;
    ans=-1;
    cin>>n>>m;
    solve(n,m,cnt);
    cout<<ans;

}