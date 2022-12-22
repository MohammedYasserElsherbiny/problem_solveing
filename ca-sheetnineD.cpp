#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e6 + 5;






int main ()
{
    FIO

    int n,k;
    cin>>n>>k;
    vector <int> vec(1005,1);
    vector <int> sum;
    vector<int> prime;
    vec[0]=vec[1]=0;
    for(int i=2;i*i<=1000;i++)
    {
        if(vec[i])
        {
            for(int j=i*2;j<=1000;j+=i)
            {
                vec[j]=0;

            }
        }   
    }
    for(int i=0;i<=1000;i++)
    {
        if(vec[i])
        {
            prime.push_back(i);
        }
    }
    for(int i=1;i<(int)prime.size();i++)
    {
        sum.push_back(prime[i]+prime[i-1]);
        
    }
    int cnt=0;
    for(int i=0;i<(int)sum.size();i++)
    {
        if(sum[i]+1<=n&&vec[sum[i]+1])
        {
            cnt++;
        }
    }
    if(cnt>=k)
    {
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";




}