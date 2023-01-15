#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO
    int k,n,w;
    cin>>k>>n>>w;
    int sum=k*((w*(w+1))/2);
    if(n>sum) cout<<0;
    else
    cout<<abs(n-sum);
}