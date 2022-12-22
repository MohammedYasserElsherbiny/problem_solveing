#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0),cin.tie(0);
#define ll long long 
int main ()
{
    /*
    
    vector <int> vec;
    int n;
    cin>>n;
    vector <ll> divs;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            divs.push_back(i);
            if(i!=n/i)
            divs.push_back(n/i);
        }
    }
    for(ll z : divs)
    {
        cout<<z<<' ';
    }
    */
   ll n;
   cin>>n;
   vector <pair<ll,ll>>fact;
   for(int i=2;i*i<=n;i++)
   {
        int count=0;
        while(n%i==0)
        {
            n/=i;
            count++;
        }
        if(count)
        {
            fact.push_back({i,count});
        }
   }
   if(n>1)
   {
        fact.push_back({n,1});
   }
   
    for(auto z : fact)
    {
        cout<<z.first<<'^'<<z.second<<' ';
    }



 
/*
    vector<int>num;
    for(int i=0;i<100;i++)
    {
        num.push_back(i+1);
    }
    vector<int>prime(101,1);
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i<=100;i++)
    {
        if(prime[i])
        {
            for(int j=i*2;j<=100;j+=i)
            {
                prime[j]=0;
            }
        }
    }
    for(int i=2;i<100;i++)
    {
        if(prime[i])
        {
            cout<<num[i-1]<<" ";
        }
    }
    */
}