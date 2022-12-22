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
        ll n,sumr=0,sumb=0;
        cin>>n;
        vector <int> vec;
        for( int i=0 ; i<n ; i++ )
        {
            ll l;
            cin>>l;
            vec.push_back(l);
        }
        sort(vec.begin(),vec.end());
        for(int i=1;i<=n;i++)
        {
            if(i<=(n/2)+1)
            {
                sumb+=vec[i-1];
            }
            else
            {
                sumr+=vec[i-1];
            }
        }
        if(sumr>sumb)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
}