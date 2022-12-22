#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;







int main ()
{
    FIO


    int t;
    cin>>t;
    while(t--)
    {
        int n,suma=0,sumb=0;
        cin>>n;
        int mx=0;
        for(int i=0;i<=31;i++)
        {
            if((n>>i)&1)
            {
                mx++;

            }
        }
        for(int i=0;i<=31;i++)
        {
            if((n>>i)&1)
            {
                if(suma==0&&mx>1)
                {
                    suma=suma | (1<<i);
                }
                else
                {
                    sumb=sumb | (1<<i);
                }
                
            }
            
        }
        cout<<suma<<' '<<sumb<<'\n';

    }

}