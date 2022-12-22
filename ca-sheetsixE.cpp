#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const ll N = 1e12+105;
const ll mod = 1e9+7;


bool ok(ll mid,vector <ll> n , vector <ll> p,ll r,vector <ll> ing)
{
    ll dif=0;
    ll temp=r;
    for(int i=0;i<3;i++)
    {
        dif=ing[i]*mid-n[i];
        if(dif>0)
        {
            temp-=p[i]*dif;
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
    string str;
    vector <ll>n(3),p(3),ing(3);
    ll r;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='B')
        {
            ing[0]++;
        }
        else if(str[i]=='S')
        {
            ing[1]++;
        }
        else
        {
            ing[2]++;
        }
    }
    for(int i=0;i<3;i++)
    {
        cin>>n[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>p[i];
    }
    cin>>r;

    ll lo=0,hi=N,ans=0,mid;
    while (lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        if(ok(mid,n,p,r,ing))
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