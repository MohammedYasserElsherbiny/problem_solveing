#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
int N=2e5+5;

int main ()
{
    FIO

   
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }

    multimap<int,int> mp;
    int l=0,r=0;
    int sum=0;

    for(int i=0;i<=n;i++)
    {
        if(l>0)
        {
            mp.insert({sum,r-k});
            sum-=vec[l-1];
        }
        if(abs(l-r)==k-1)
        {
            l++;
        }

        sum+=vec[r];
        r++;
    }

    for(auto p:mp)
    {
        cout<<p.second+1;
        break;
    }

   
   


   
}