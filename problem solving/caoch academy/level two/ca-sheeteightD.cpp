#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr);
#define ll long long
bool found;
void solve (ll arr[],ll sum, int indx, ll n,ll size)
{
    if(sum==n)
    found=1;
    if(indx==size)
    return;
    
    solve(arr,sum+arr[indx],indx+1,n,size);
    solve(arr,sum,indx+1,n,size);
}


int main ()
{
    FIO;
    ll t;
    
    cin>>t;
    while(t--)
    {
        ll s,n;
        cin>>s>>n;
        ll arr[100000];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        found=0;
        solve(arr,0,0,s,n);
        if(found)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
} 