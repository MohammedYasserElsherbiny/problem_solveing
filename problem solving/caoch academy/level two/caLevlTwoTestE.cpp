#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e5+5;
const ll mod = 1e9+7;








int main ()
{
    FIO

    
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector <int> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
       for(int i=0;i<n;i++)
       {
        int num=0;
            for(int j=0;j<=4;j++)
            {
                
                
                bool f= (vec[i]>>j)&1;
                if(f)
                {
                    num+=1<<j;
                }
            
            }
            vec[i]=num;
       }
       for(int z : vec)
       {
            cout<<z<<' ';
       }
       cout<<'\n';
       
       
        
    }

   
   
    
    
    
}