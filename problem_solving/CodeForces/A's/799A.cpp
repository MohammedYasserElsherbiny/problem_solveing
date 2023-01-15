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
    
   
   int n,t,k,d;
   cin>>n>>t>>k>>d;
   
    int g=(n+k-1)/k;
    int cnt1=0,cnt2=d;
    for(int i=0;i<g;i++)
    {
        if(cnt1<=cnt2) cnt1+=t;
        else cnt2+=t;
    }
  
   if(max(cnt1,cnt2)<g*t)
   {
        cout<<"YES";
   }
   else
   {
        cout<<"NO";
   }
    
}