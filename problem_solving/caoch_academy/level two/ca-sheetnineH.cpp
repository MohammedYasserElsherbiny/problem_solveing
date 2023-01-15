#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e8;





int main ()
{
    FIO
    vector <bool> prime (N+1,1);
    prime[0]=prime[1]=0;
    for(int i=2;i*i<=N;i++)
    {
        if(prime[i])
        {
            for(ll j=i*i;j<=N;j+=i)
            {
                prime[j]=0;
            }
        }
    }
    int cnt=0;
    for(int i=2;i<=N;i++)
    {
        if(prime[i])
        {
            if(cnt%100==0)
            cout<<i<<'\n';
            cnt++;
        }
       
    }
}