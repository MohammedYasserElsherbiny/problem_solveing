#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    int n,k,cnt=0;
    cin>>n>>k;
    while (n--)
    {
        int temp=0;
        string str;
        cin>>str;
        set <ll>vec;
        for(int i=0;i<str.size();i++)
        {
            vec.insert(str[i]-'0');
        }
        for(int i=0;i<=k;i++)
        {
            if(count(vec.begin(),vec.end(),i)>=1)
            {
                temp++;
            }        
        }
        if(temp==k+1)
        {
            cnt++;
        }


    }
    cout<<cnt;
} 
