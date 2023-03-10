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

    int t;
    cin>>t;
    int temp=t+1;
    while (temp--)
    {
        string str;
        //if(temp==0) cin>>str;

        getline(cin,str);
        if(str.empty())
        {
            if(temp==t) continue;
            cout<<"Yes\n";
            continue;
        }
        stack <char> st;
        for(int i=0;i<str.size();i++)
        {
            if(st.empty())
            {
                st.push(str[i]);
            }
            else
            {
                if(str[i]==')'&&st.top()=='(')
                {
                    st.pop();
                }
                else if(str[i]==']'&&st.top()=='[')
                {
                    st.pop();
                }
                else
                {
                    st.push(str[i]);
                }


            }
        }
        if(st.empty())
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }

}