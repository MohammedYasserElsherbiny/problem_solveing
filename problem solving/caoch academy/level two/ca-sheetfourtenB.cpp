#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;

int main ()
{
    FIO;
    int t;
    cin>>t;
    while (t--)
    {
        ll l,r;
        cin>>l>>r;
        ll temp=r/2;
        if(l==r)
        {
            cout<<0<<'\n';
        }
        else if(temp>=l)
        {
            if(r&1)
            {
                cout<<((r-2)%temp)+1<<'\n';
            }
            else
            cout<<(r-1)%temp<<'\n';
        }
        else
        {
            while (temp<l)
            {
                temp++;
            }
            cout<<r%temp<<'\n';
        }



    }
}