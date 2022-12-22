#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        str[i]=tolower(str[i]);
        if(str[i]=='a'||str[i]=='o'||str[i]=='y'||str[i]=='e'||str[i]=='u'||str[i]=='i')
        {
            str[i]='?';
        }
    }
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='?') continue;
        if(str[i]!='.')
        {
            cout<<'.';
        }
        cout<<str[i];
    }
}