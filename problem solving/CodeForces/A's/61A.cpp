#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;







int main ()
{
    FIO

    string str1,str2;
    cin>>str1>>str2;
    for(int i=0;i<str1.size();i++)
    {
        if(str1[i]==str2[i]) cout<<'0';
        else cout<<'1';
    }
}