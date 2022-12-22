#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;






int main ()
{

    FIO
    
    int n,cr=0,cl=0,fidx,lidx,diffidx;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n-1;i++)
    {
        if(str[i]=='L')
        {
            cl++;
        }
        if(str[i]=='R')
        {
            cr++;
        }
        if(str[i+1]>str[i]&&str[i]=='.')
        {
            fidx=i;
        }
        if(str[i+1]<str[i]&&str[i+1]=='.')
        {
            lidx=i+1;
        }
        if(str[i]=='R'&&str[i+1]=='L')
        {
            diffidx=i;
        }
    }
    if(cl==0)
    {
        cout<<fidx+2<<' '<<lidx+1;
    }
    else if(cr==0)
    {
        cout<<lidx<<' '<<fidx+1;
    }
    else
    {
        cout<<fidx+2<<' '<<diffidx+1;
    }
    
}