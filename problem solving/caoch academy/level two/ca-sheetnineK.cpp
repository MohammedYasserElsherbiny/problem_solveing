#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e6 + 5;
const int mod = 1e9+7;




int main ()
{
    FIO
    ll n,sum=1;
    cin>>n;
    vector <int>freq(1001,0);
    vector <int>prime(1001,1);
    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            for(int j=i;j<=n;j+=i)
            {
                prime[j]=0;
                int temp=j;
                while (temp%i==0)
                {
                    freq[i]++;
                    temp/=i;
                }
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        sum=(sum*(freq[i]+1))%mod;
    }
    cout<<sum;

}


