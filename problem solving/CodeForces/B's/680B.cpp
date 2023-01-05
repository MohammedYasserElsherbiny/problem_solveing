#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;




int main ()
{
    FIO

    int n,a;
    cin>>n>>a;
    vector<int> vec(n+1);
    int cnt=0,crm=0;
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
        if(vec[i]==1) crm++;
    }
    
    for(int i=1;i<=n&&i<a;i++)
    {
        if(a+i>n) break;
        if(vec[a+i]+vec[a-i]==1)
        {
            crm--;
        }
    }
    cout<<crm;
    
    
}