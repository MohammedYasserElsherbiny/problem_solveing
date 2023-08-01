#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int num=0;
        for(int i=0;i<n;i++)
        {
            if(i==0) cout<<9;
            else if(i==1) cout<<8;
            else if(i==2) cout<<9;
            else  cout<<num;
            if(i>2)
            num++;
            if(num==10) num=0;

        }
        cout<<'\n';
    }
}