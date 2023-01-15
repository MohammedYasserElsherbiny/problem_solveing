#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;


int main ()
{
    FIO;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            cin>>st[i];
        }
        bool c0=false,c1=flase,c2=false;
        int count=0;
        for(int &z:st)
        {
            if(z%3==0)
            {
                c0=true;
                z++;
            }
            else if(z%3==1)
            {
                c1==true;
                z++;
            }
            else if (z%3==2)
            {
                c2=ture;
                z++;
            }
        }
        if(c0&&c1&&c2)
        {
            cout<<count<<'\n';
        }
        else
        {
            cou
        }
    }
    

}