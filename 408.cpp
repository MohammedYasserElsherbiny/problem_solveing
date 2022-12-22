#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 600;
const ll mod = 1e9+7;







int main ()
{
    FIO
    
    int s,m;
    int t=3;
    while (cin>>s>>m)
    {
        set <int> st;
        
        int sz=1;
        int seed=0;
        st.insert(seed);
        while(sz==st.size())
        {
            seed=(seed+s)%m;
            st.insert(seed);
            sz++;
        }
        int mx=*max_element(st.begin(),st.end());
        cout<<setw(10)<<s<<setw(10)<<m<<setw(5);
        if(mx==st.size()-1&&mx==m-1)
        {
            cout<<"Good Choice\n\n";
        }
        else
        {
            cout<<"Bad Choice\n\n";
        }
    }
   
    
}