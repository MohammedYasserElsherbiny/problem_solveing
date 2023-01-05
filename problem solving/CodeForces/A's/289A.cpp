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
    int n,k,cnt=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        cnt+=(r-l)+1;
    }
    int temp=cnt;
    while (cnt%k!=0)
    {
        cnt++;
    }
    cout<<cnt-temp;
}