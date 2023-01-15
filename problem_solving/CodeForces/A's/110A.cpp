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
        if(str[i]!='7'&&str[i]!='4')
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

}