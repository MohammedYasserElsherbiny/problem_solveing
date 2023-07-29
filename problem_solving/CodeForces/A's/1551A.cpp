#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int t;
    cin>>t;

    while (t--)
    {
        double n;
        int ans1,ans2;
        cin>>n;
        
        ans1=ceil(n/3);
        ans2=floor(n/3);
        
        if((int)(n+1)%3==0)
        {
            cout<<ans2<<' '<<ans1<<'\n';
        }
        else
        {
            cout<<ans1<<' '<<ans2<<'\n';
        }
        


        // cout<<ans1<<' '<<ans2<<'\n';
    }
    
}