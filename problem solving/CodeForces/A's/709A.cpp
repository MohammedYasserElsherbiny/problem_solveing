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
    
   ll n,b,d,sum=0,cnt=0;
   cin>>n>>b>>d;
   vector <int>vec(n);
   for(int i=0;i<n;i++)
   {
        int temp;
        cin>>temp;
        if(temp<=b)
        {
            sum+=temp;
            if(sum>d)
            {
                cnt++;
                sum=0;
            }
        }
   }
    cout<<cnt;
   
    
}