#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    //FIO

    int n,m,cnt=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        bool f=false,f2=false;
        if(i%2==0)
        for(int j=0;j<m;j++)
        {
            cout<<'#';
        }
        else
        for(int j=0;j<m-1;j++)
        {
            if(!f)
            {
                cnt++;
                f=true;
            }
            if(cnt%2==0&&!f2)
            {
                cout<<'#';
                f2=true;
            }
            cout<<'.';
        }
        if(cnt%2!=0&&i%2!=0)
        cout<<'#';
        cout<<'\n';
            
    }
}