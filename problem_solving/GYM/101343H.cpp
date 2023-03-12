#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    //FIO

    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    for(int i=0;i<n-1;i++)
    {
        bool f=true;
        for(int j=i+1;j<=n;j+=2)
        {
            if(j==n) break;
            int mx= max(vec[i],vec[j]);
            if(mx==vec[i]&&j+1<n)
            mx= max(vec[i],vec[j+1]);
            if(mx != vec[i])
            {
                if(mx== vec[j+1])
                cout<<vec[j+1]<<' ';
                else
                cout<<vec[j]<<' ';
                f=false;
                break;
            }
        }
        if (f) 
        cout<<"-1 ";
    }
    cout<<"-1";
}