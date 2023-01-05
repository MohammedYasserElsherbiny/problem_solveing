#include <bits/stdc++.h>
#include <iostream>
#include <vector>
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
    int temp=1;
    while (t--)
    {

        int n;
        cin>>n;
        vector <int>vec(n);
        int mx=-INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        for(int i=0;i<n-1;i++)
        {
            mx=max(vec[i+1]-vec[i],mx);
        }
        int tempmx=mx;
        for(int i=0;i<n-1;i++)
        {
            if (vec[i+1]-vec[i]>tempmx)
            {
                mx+=(vec[i+1]-vec[i]);
                tempmx+=(vec[i+1]-vec[i])-mx;
            }
            if(tempmx==vec[i+1]-vec[i])
            {
                tempmx--;
            }
        }
        cout<<"Case "<<temp++<<": "<<mx<<'\n';
    }
    
    
    
}