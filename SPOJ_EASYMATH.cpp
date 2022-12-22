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
        ll n,m,a,d;
        int cnt=0;
        cin>>n>>m>>a>>d;
        while (n<=m)
        {
            if(m%a!=0)
            {
                if(m%(a+d)!=0)
                {
                    if(m%(a+2*d)!=0)
                    {
                        if(m%(a+3*d)!=0)
                        {
                            if(m%(a+4*d)!=0)
                            {
                                cnt++;
                            }
                        }
                    }
                }
            }
            m--;
        }
        cout<<cnt<<'\n';
    }
}