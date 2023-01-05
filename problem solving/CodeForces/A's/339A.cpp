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
    
    string str;
    cin>>str;
    multiset<int>st;
    for(char c: str)
    {
        if(c!='+')
        {
            st.insert(c-'0');
        }
    }
    auto it=st.begin();
    for(int i=0;i<(int)str.size();i++)
    {
        if(i%2==0)
        {
            cout<<*it;
            it++;
        }
        else
        {
            cout<<'+';
        }
    }
    
   
    
}