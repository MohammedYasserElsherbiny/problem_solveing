#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;





int main ()
{
    FIO
    int n,m;
    cin>>n>>m;
    vector<int>prime(10001,1);
    prime[0]=prime[1]=0;
    for(int i=2;i<=10001;i++)
    {
        if(prime [i])
        {
            for(int j=2*i;j<=10001;j+=i)
            {
                prime [j]=0;
            }
        }
    }
    bool f=false;
    for(int i=n+1;i<m;i++)
    {
        if(prime[i])
        {
            f= true;
        }
    }
    if(f)
    {
        cout<<"NO";
        return 0;
    }
    if(prime[n])
    {
        if(prime[m])
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else
    {
        cout<<"NO";
    }
}