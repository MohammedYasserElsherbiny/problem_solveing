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
    
    ll n,t,num=1;
    cin>>n>>t;
    ll temp=num,var=t,cnt=0;
    while(var)
    {
        var/=10;
        cnt++;

    }
    num*=t;
    if(cnt>n)
    {
        cout<<"-1";
        return 0;
    }
    if(t<10)
    for(int i=0;i<n;i++)
    {
        cout<<t;
    }
    else
    {
        for(int i=0;i<n-2;i++)
        {
            cout<<1;
        }
        cout<<t;
    }

}