#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO
    
    int n,k,cnt=0;
    cin>>n>>k;
    k--;
    vector <int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    for(int i=0;i<n;i++)
    {
        if(vec[i]>0)
        {
            if(vec[i]>=vec[k]) cnt++;
        }
    }
    cout<<cnt;
}