#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    int n,sum=0,cnt=0;
    cin>>n;
    vector <int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        sum+=vec[i];
    }
    for(int i=0;i<n;i++)
    {
        if((sum-vec[i])%2==0) cnt++;
    }
    cout<<cnt;

}