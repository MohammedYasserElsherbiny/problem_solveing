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
        vector<int> evn,od;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0) evn.push_back(i);
            else od.push_back(i);
        }

        for(int i=0;i<n;i++)
        {
            if(i>=evn.size()) cout<<od[i-evn.size()]<<' ';
            else cout<<evn[i]<<' ';
        }

        cout<<'\n';
    }
}