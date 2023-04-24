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
    int n;
    cin>>n;
    str=to_string(n);
     
    bool f=true;
    while (f)
    {
        n++;
        str=to_string(n);
        int sz=str.size();
        set<char> st;
        for(int i=0;i<sz;i++)
        {
            st.insert(str[i]);
        }

        if(st.size()==4)
        {
            cout<<n;
            f=0;
        }
    }

}