#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    int n;
    cin>>n;

    int res=1,a=1378;
    while (n>0)
    {
        if(n%2==1)
        res=(res*a)%10;
        a=(a*a)%10;
        n/=2;

    }
    cout<<res;
    
}