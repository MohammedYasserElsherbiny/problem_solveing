#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e9+5;
const ll mod = 1e9+7;


int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,p;
        cin>>n>>p;
        vector <int> vec(p);
        for(int i=0;i<p;i++)cin>>vec[i];
        bool f=false;
        for (int i=(1<<p)-1;i>=1;i--)
        {
            int sum=0;
            for(int j=p-1;j>=0;j--)
            {
                
                if((i>>j)&1)
                {
                    sum+=vec[(p-1)-j];
                }
                if(sum==n)
                {
                    f=true;
                }
            }
        }
        if(f)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}