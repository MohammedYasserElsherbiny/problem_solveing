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
    
    ll n,x;
    int cnt=0;
    cin>>n>>x;
    char ch;
    while (n--)
    {
        int temp;
        cin>>ch>>temp;
        if(ch=='+')
        {
            x+=temp;
        }
        else
        {
            if(x-temp<0)
            {
                cnt++;
            }
            else
            {
                x-=temp;
            }
        }
    }
    
    cout<<x<<' '<<cnt;
   
    
}