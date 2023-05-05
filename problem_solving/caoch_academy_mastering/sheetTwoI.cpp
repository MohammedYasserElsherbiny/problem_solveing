#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> st;
    int cnt=0,sum=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;

        if(x>=0)
        {
            sum+=x;
            cnt++;
        }
        else
        {
            if(x+sum >=0)
            {
                sum+=x;
                cnt++;
                st.push(x);
            }
            else if(st.size())
            {
                int x2 =st.top();
                if(x2<x)
                {
                    sum-=x2;
                    //cnt++;
                    sum+=x;
                    st.pop();
                    st.push(x);
                }
            }
        }
    }
    cout<<cnt;
}