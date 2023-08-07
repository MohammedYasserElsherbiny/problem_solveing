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
        int n;
        cin>>n;

        vector<vector<int>> vec(n);
        vector<int> cnt(n);
        pair <int,int> p;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                int l;
                cin>>l;
                vec[i].push_back(l);
            }
        }

        int cnt1=0,cnt2=0,ans,i=1,j=0,mn=INT_MAX;
        bool f=1;


        for(i=0;i<5;i++)
        {
            mn=vec[0][i];
            for(j=1;j<n;j++)
            {
                if(vec[j][i]<mn)
                {
                    //mn=vec[j][i];
                    //p.first=vec[j][i];
                    //p.second=j;
                    cnt[j]++;
                }
            }
        }


        //cout<<4;
    }
}