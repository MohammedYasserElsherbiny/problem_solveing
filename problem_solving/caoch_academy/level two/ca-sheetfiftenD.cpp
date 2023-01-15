#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 5e4+5;
const ll mod = 1e9+7;

int main ()
{
    FIO;
    int t;
    cin>>t;
    while (t--)
    {
        ll n,sum=0;
        cin>>n;
       
        
        bool f=false;
        while (!f)
        {
            sum=0;
             ll temp = n;
            while (temp/10>0)
            {
                sum+=temp%10;
                temp/=10;
            }
            sum+=temp;
            if(__gcd(n,sum)>1)
            {
                f=true;
            }
            else
            n++;
        }
        cout<<n<<'\n';
    }
}