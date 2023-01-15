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
    while (t--)
    {
        int n;
        cin>>n;
        vector <int> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<n-1;i++)
        {
            if(vec[i]==vec[i+1])
            {
                swap(vec[i],vec[i-1]);
                swap(vec[i],vec[i+1]);
            }
        }
        for(int z: vec)
        {
            cout<<z<<' ';
        }
        cout<<'\n';
    }
    
    

   
   
    
    
    
}