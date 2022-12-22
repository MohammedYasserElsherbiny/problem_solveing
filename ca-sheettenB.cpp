#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e5+5;
const ll mod = 1e9+7;



int main ()
{
    FIO

     ll t;
     cin>>t;
     while(t--)
     {
          ll n;
          cin>>n;
          vector<ll>a;
          for(ll i=n+1; ;i++)
          {
               bool find = true;
               for(ll j=2;j*j<=i;j++)
               {
                    if(i%j==0)
                    {
                         find=false;
                         break;
                    }
               }
               
               if(find)
               {
                    a.push_back(i);
                    break;
               }
          }
          
          for(ll i= a.back()+n;;i++)
          {
               bool find = true;
               for(ll j=2;j*j<=i;j++)
               {
                    if(i%j==0)
                    {
                         find=false;
                         break;
                    }
               }
               
               if(find)
               {
                    a.push_back(i);
                    break;
               }
          }
          
          cout<<min(a[0]*a[1],a[0]*a[0]*a[0])<<'\n';
     }


}