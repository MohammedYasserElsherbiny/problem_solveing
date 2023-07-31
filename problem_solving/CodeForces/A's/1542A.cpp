#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    int t;
    cin>>t;

    while (t--)
    {
        int n,cnt1=0,cnt2=0;

        cin>>n;

        for(int i=0;i<2*n;i++)
        {
            int temp;
            cin>>temp;
            if(temp%2==1)
            {
                cnt2++;
            }
            else
            {
                cnt1++;
            }
        }

        if(cnt1==cnt2)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }

    }
}