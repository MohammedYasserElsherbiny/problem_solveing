#include <bits/stdc++.h>
#include<stack>
#include <vector>
#include <algorithm>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e5+5;
const ll mod = 1e9+7;




int main ()
{
    FIO

    
    int t;
    cin>>t;
    while (t--)
    {
        int n,count=0;
        cin>>n;
        vector <int> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        
        for(int i=0;i<n-1;i++)
        {
            int mx;
            mx=max(vec[i],vec[i+1]);
            int mn;
            mn=min(vec[i],vec[i+1]);
            while(mn*2<mx)
            {
                mn*=2;
                count++;
            }
        }
        cout<<count<<'\n';
        
    }
}