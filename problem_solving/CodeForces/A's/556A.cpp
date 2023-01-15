#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int n,cntzero=0,cntone=0;
    cin>>n;
    vector<char>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    
    cntzero=count(vec.begin(),vec.end(),'0');
    cntone=count(vec.begin(),vec.end(),'1');
    n-=2*min(cntone,cntzero);
    cout<<n;

    
}