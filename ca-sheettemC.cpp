#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e5+5;
const ll mod = 1e9+7;


int main ()
{
    FIO

    
    int t;
    cin>>t;
    while (t--)
    {
        int g,l;
        cin>>g>>l;
        if(g/__gcd(g,l)*l!=l)cout<<"-1\n";
        else cout<<g<<' '<<l<<'\n';



    }



}