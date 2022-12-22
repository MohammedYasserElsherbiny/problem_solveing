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
    
    int n,k;
    cin>>n>>k;
    int cnt=0;
    while (cnt<n)
    {
        char c='a';
        for(int i=0;i<k;i++)
        {
            cout<<c++;
            cnt++;
            if(cnt==n) break;
        }
    }
    
   
   
    
   
    
}