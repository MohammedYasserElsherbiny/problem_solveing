#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO


    int n,ans=0;
    cin>>n;
    while (n != 0)
    {
        if(n%2==1)
        ans++;
        n/=2;
    }
    cout<<ans;
}