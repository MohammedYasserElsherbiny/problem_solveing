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
    
    int n;
    cin>>n;
    vector <int> wire(n);
    for(int i=0;i<n;i++)
    {
        cin>>wire[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        x--;
        if(x==n-1)
        {    }
        else
        {
            wire[x+1]+=wire[x]-y;
        }
        if(x==0)
        {    }
        else
        wire[x-1]+=y-1;
        wire[x]=0;
    }
  
    for(int z:wire)
    {
        cout<<z<<'\n';
    }
    
}