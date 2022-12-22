#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO
    
    string str;
    cin>>str;
    int sum=0;

    int cnt=0;
    while(str.size()!=1)
    {
        sum=0;
        for(int i=0;i<str.size();i++)
        {
            sum+=str[i]-'0';
        }
        str=to_string(sum);
        cnt++;
    }
    
    cout<<cnt;
}