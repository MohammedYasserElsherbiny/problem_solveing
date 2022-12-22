#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main()
{
    FIO

    string str;
    cin>>str;
    int cnt=0;
    for(int i=0;i<str.size();i++)
    {
        if(cnt>1)
        {
            break;
        }
        if(str[i]=='1')
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<<0;
        return 0;
    }
    int zeros=str.size()-1;
    if(cnt==1)
    {
        if(zeros%2==0)
        {
            cout<<zeros/2;
        }
        else
        {
            cout<<zeros/2+1;
            // int k=str.size()+1;
            // cout<<k/2;
        }
    }
    else
    {
       
            cout<<zeros/2+1;
        
        // int k=str.size()+1;
        // cout<<k/2;
    }
    
}