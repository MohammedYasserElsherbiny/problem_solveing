#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    int a,b;
    cin>>a>>b;
    int mn=min(a,b);
    if(a>b)
    {
        cout<<mn<<' '<<(a-mn)/2;
    }
    else
    {
        cout<<mn<<' '<<(b-mn)/2;
    }
}