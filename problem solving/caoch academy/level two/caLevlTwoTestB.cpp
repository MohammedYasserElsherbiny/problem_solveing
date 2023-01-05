#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int ans;


void fourDiv (int d,int n)
{
    set <int> divs;
    bool f=true;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            divs.insert(i);
            if(i!=n/i)
            divs.insert(n/i);
        }
        if(divs.size()>4)
        {
            f= false;
            break;
        }
    }
    auto it =divs.begin();
    auto it2=divs.begin();
    it2++;
    
    if (divs.size() != 4)
    {
        f=false;
    }
    else
    {
        for(int i=0; i<3;i++)
        {
            if(abs(*it-*it2)<d)
            {
                f= false;
            }
        }
    }
    it2=divs.end();
    it2--;
    if (!f) fourDiv(d,n+1);
    else 
    {
        
        ans=*it2;

    } 
}


int main ()
{
    FIO
    
    int t;
    cin>>t;
    while (t--)
    {
        int d;
        cin>>d;
        fourDiv(d,6);
        cout<<ans<<'\n';
    }
    
    
    
    
    
}