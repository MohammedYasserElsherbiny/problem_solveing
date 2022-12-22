#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e9+5;
const ll mod = 1e9+7;



int main ()
{
    FIO
    int n,l,r,x,cnt=0;
    cin>>n>>l>>r>>x;
    vector <int> vec(n);
    int mx=-INT_MAX,mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        mx=max(mx,vec[i]);
        mn=min(mn,vec[i]);
    }
    bool f=false;
    vector <int> count;
    for(int i=(1<<n)-1;i>=1;i--)
    {

        for(int j=n-1;j>=0;j--)
        {
            if((i>>j)&1)
            {
                
                
            }
        }
        if(mx-mn<x)
        {
            f=false;
        }
        else 
        {
            if(count.size()>=2)
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
}