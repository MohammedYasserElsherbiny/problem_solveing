#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
    int n,sum1=0,sum2=0;

    cin>>n;
    deque<int> dq;
    for(int i=0;i<n;i++)
    {
       int l;
       cin>>l;
       dq.push_back(l);
    }
    
    
    for(int i=0;i<n;i++)
    {
        if(1&i)
        {if(dq.back()>dq.front())
        {
            sum1+=dq.back();
            dq.pop_back();
        }
        else
        {
            sum1+=dq.front();
            dq.pop_front();
        }}
        else
        {if(dq.back()>dq.front())
        {
            sum2+=dq.back();
            dq.pop_back();
        }
        else
        {
            sum2+=dq.front();
            dq.pop_front();
        }}
    }
    cout<<sum2<<' '<<sum1;
    
   
   
   
   
   


}