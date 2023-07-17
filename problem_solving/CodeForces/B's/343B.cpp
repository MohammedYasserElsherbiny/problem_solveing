#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO
    

    string str;
    cin>>str;
    stack<char> st;
    for(int i=0;i<str.size();i++)
    {
        if(st.empty())
        {
            st.push(str[i]);
        }
        else
        {
            if(str[i]==st.top())
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
        cout<<"Yes";
    }
    else cout<<"No";
}