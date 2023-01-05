#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;


int main ()
{
    FIO
    ll n,t;
    cin>>n>>t;
    vector <ll>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    ll l=0,r=0,sum=0,mx=0;
    vector<ll> temp(n);
    
    int vis=0;
    while (l<=r&&r<n)
    {
        sum+=vec[r++];
        
            while (sum>t)
            {
            sum-=vec[l++];
            }
        
        mx=max(mx,r-l);

        

    }
    if(mx==-1)
    {
        cout<<0;
    }
    else
    cout<<mx;
}