#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;

string str;

void upper (int n,int idx)
{
    if(n==4)
    return ;

    if(str[idx]>='a'&&str[idx]<='z')
    {
        str[idx]-=32;
    }
        upper(n+1,idx+1);
    

}



int main ()
{
    FIO
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        int idx=0;
        upper(1,idx);
        if(str=="YES")
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

}