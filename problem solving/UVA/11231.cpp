#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO
    int n,m,c;
    while (cin>>n>>m>>c)
    {
        if(n==0) break;
        n-=7;
        m-=7;
        cout<<((n*m)+c)/2<<'\n';
    }
}