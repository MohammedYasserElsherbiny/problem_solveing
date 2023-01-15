#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e5+5;
const ll mod = 1e9+7;


int main ()
{
    FIO
    ll n,x,count=0,sum=0;
    vector <ll> vec;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll l;
        cin>>l;
        vec.push_back(l);
        sum+=l;
    }
    cin>>x;
    count=(x/sum)*n;
    
    
        
        if(x%sum!=0)
        {
            ll y=(count/n)*sum;
            for(int i=0;i<n;i++)
            {
               y+=vec[i];
               count++;
               if(y>x)
               {
                
                break;
               }
            }
        }
        else
        {
            count++;
            
        }
        cout<<count;
    
}