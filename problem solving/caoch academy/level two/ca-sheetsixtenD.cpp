#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e5+5;
const ll mod = 1e9+7;
int main ()
{
    FIO;
    string str1,str2;
    int cnt=0;
    cin>>str1>>str2;
    if(str2.size()>str1.size())
    {
        string temp=str1;
        str1=str2;
        str2=temp;
    }
    int x=str1.size(),y=str2.size();
    int k=x,l=y;
    str1.reserve();
    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());
    
    if(str1==str2)
    {
        cout<<0;
    }
    //
    else
    {
        for(int i=0;i<x+y;i++)
        {
            if(k>l)
            {                
                str1.erase(k-1);
                cnt++;
                k--;
            }
            else
            {               
                str2.erase(l-1);
                cnt++;
                l--;
            }
            if(str1.empty()&&str2.empty())
            {
                cout<<cnt;
                break;
            }
            if(str1==str2)
            {
                cout<<cnt;
                break;
            }
        }
    }
}