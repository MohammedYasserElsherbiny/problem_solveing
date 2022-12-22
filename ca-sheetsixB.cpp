#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e9+5;
const ll mod = 1e9+7;

    int n,k;
    

bool ok (int mid, vector <ll> cost, vector <ll> ing)
{
    ll dif=0,temp=k;
    for(int i=0;i<n;i++)
    {
        dif=ing[i]*mid-cost[i];
        if(dif>0)
        {
            temp-=dif;
        }
        if(temp<0)
        {
            break;
        }

    }
    if(temp>=0)
    {
        return true;
    }
    return false;
}    

int main ()
{
    FIO
    cin>>n>>k;
    vector <ll> cost(n),ing(n);
    for(int i=0;i<n;i++)
    {
        cin>>ing[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>cost[i];
    }
    int lo=0,hi=N,mid,ans=0;
    while(lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        if(ok(mid,cost,ing))
        {
            ans=mid;
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }

    cout<<ans;
}