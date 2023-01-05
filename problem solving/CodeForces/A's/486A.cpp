#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    ll n,sum=0;
    cin>>n;
    
    if(n%2==0)
    {
        cout<<n/2;
    }
    else
    {
        n++;
        n=-1*n;
        cout<<n/2;
    }

    // cout<<sum;
    
}