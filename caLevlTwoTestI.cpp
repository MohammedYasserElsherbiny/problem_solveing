#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e5+5;
const ll mod = 1e9+7;


vector<bool> vec(N+1,1);
void solve ()
{
    vec[0]=0;
    
    for(int i=2;i*i<=N;i++)
    {
        if(vec[i])
        {
            for(ll j=i*i;j<=N;j+=i)
            {
                vec[j]=0;
            }
        }
    }
}





int main ()
{
    FIO
    
    string str;
    solve();
    int t=3;
    while (cin>>str)
    {
        
        ll sum=0;
        for(char ch : str)
        {
            if(ch>'Z')
            sum+=(ch-'a')+1;
            else
            sum+=(ch-'A')+27;
        }
        
        if(vec[sum])
        {
            cout<<"It is a prime word.\n";
            
            
        }
        else
        {
            cout<<"It is not a prime word.\n";
            
            
        }
    }
    
    
    
    
}