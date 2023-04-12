#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    string str1,str2;
    cin>>str1>>str2;
    ll sz1=str1.size(),sz2=str2.size();
    ll cnt=0;
    if(sz1>sz2)
    {
        str1.erase(str1.begin() + 0, str1.end() - (sz1-(sz1-sz2)));
        cnt+=(sz1-sz2);
    }
    else if(sz2>sz1)
    {
        str2.erase(str2.begin() + 0, str2.end() - (sz2-(sz2-sz1)));
        cnt+=(sz2-sz1);
    }

    sz1=str1.size();
    sz2=str2.size();

    for(int i=0;i<sz1;i++)
    {
        if(str1[i]!=str2[i])
        {
            cnt+=2;
        }
    }
    cout<<cnt;
    
}