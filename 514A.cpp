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
    // int cntothers=0;
    // for(int i=0;i<str.size();i++)
    // {
    //     if(str[i]!='9')
    //     {
    //         cntothers++;
    //         break;
    //     }
    // }
    // if(cntothers==0)
    // {
    //     cout<<str;
    //     return 0;
    // }
    for(int i=0;i<str.size();i++)
    {
        //if(str[i]=='9') continue;
        //char c;
        int x=str[i]-'0';
        if(9-x<x)
        {
            int temp=9-x;
            if(temp==0&&i==0) 
            continue;
            str[i]=temp+'0';
        }
    }
    //bool f=false;
    // for(int i=0;i<str.size();i++)
    // {
    //     if(str[i]!='0') 
    //     {
    //         f=1;
    //     }
    //     if (f)
    //     {
    //         cout<<str[i];
    //     }
    // }
    cout<<str;
    
}