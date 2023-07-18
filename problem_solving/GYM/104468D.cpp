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
        int n,m,cnt=0;
        cin>>n>>m;
        vector<int> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }


        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(__gcd(vec[i],vec[j])==1)cnt++;
            }
        }

        cout<<cnt/2<<'\n';


    }
}