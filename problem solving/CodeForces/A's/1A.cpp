#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    double n,m,a;
    ll x=1,y=1;
    cin>>n>>m>>a;
    double f=n/a;
    y=ceil(f);
    f=m/a;
    x=ceil(f);
    cout<<x*y;
    
}