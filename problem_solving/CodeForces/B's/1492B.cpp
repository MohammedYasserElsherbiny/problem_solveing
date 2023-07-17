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
        vector<int> vec(n);
        map<int,int> pos;
        map<int,bool>vis;
        vector<int> nw;
        int mx=n,end;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            pos[vec[i]]=i;
        }

        for(int i=n;i>=1;i--)
        {
            if(pos[i]>=mx)
            {
                continue;
            }
            for(int j=pos[i];j<mx;j++)
            {
                cout<<vec[j]<<' ';
            }
            mx=pos[i];
            
        }
        cout<<'\n';
      
    }

}