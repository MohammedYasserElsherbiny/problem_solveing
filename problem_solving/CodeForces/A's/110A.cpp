#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    string str;
    cin>>str;
    int cnt=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='4'||str[i]=='7')
        {
            cnt++;
        }
    }
    if(cnt==4||cnt==7)
    {
        cout<<"YES";
    }
    else cout<<"NO";

}