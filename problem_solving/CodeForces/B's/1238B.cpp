#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int q;
    cin>>q;
    while (q--)
    {
        int n,r;
        cin>>n>>r;
       
        
        vector<int> vec(n);
        map<int,int> mp;

        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(mp[temp]>0) continue;
            vec[i]=temp;
            mp[temp]++;
        }

        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());

        int cnt=0,m;

        for(int i=0;i<vec.size();i++)
        {
            m=cnt*r;
            if(vec[i]-m>0)
            {
                cnt++;
            }
            
        }


        cout<<cnt<<'\n';

    }
    

}