#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e6 + 5;




int main ()
{
    FIO

     
    vector <ll> vec(N+1,0);
        



    int t;
    cin>>t;
    while (t--)
    {
        int a, b, n;
        int cnt=0;
        cin>>a>>b>>n; 
        vec[0]=vec[1]=0;
        if(vec[6]==0)
        for(int i=2;i<=N;i++)
        {
            if(vec[i]==0)
            {
                for(int j=i;j<=N;j+=i)
                {
                    vec[j]++;
                     
                }
            }
        } 
        for(int i=a;i<=b;i++)
        {
            if(vec[i]==n)
            cnt++;
        }
        cout<<cnt<<'\n';
    }
}