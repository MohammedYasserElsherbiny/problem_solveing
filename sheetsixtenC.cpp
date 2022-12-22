#include <bits/stdc++.h>
#include <string>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e5+5;
const ll mod = 1e9+7;


 int okk ( string s , int nn )
{
    int temp=0;
    for(int i=0;i<nn;i++)
    {
        if(s[i]=='1')
        {
            temp=max(temp,i+2+(nn-(i+1)));
            temp=max(temp,2*(i+1));
        }
    }
    return temp;
}


int main ()
{
    FIO
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string str;
        cin>>n>>str;
        int ans= okk(str,n);
        reverse(str.begin(),str.end());
        ans = max(ans,okk(str,n));
        cout<<max(ans,n)<<'\n';
    }
}