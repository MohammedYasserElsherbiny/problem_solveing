#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;


int main ()
{
    FIO
    
    int t;
    cin>>t;
    while (t--)
    {
        int n,d;
        cin>>n>>d;
        vector <int> vec(n);
        bool f = true;
        for(int i=0; i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]>d)
            f=false;
        }
        sort(vec.begin(),vec.end());
        if (vec[0]+vec[1]<=d&& !f)
        {
            f=true;
        }
        if(f) cout<<"YES\n";
        else cout<<"NO\n";

    }
}