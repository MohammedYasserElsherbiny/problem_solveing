#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    ll n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        if(k>n/2)
            cout<<(k-(n/2))*2;
        else
            cout<<k*2-1;
    }
    else 
        if(k>n/2+1)
            cout<<(k-((n/2)+1))*2;
        else cout<<k*2-1;
    
    
}