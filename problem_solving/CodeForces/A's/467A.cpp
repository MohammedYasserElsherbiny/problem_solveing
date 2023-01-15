#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int t,cnt=0;
    cin>>t;
    while (t--)
    {
        int p,q;
        cin>>p>>q;
        if(q-p>=2) cnt++;
    }
    cout<<cnt;

}