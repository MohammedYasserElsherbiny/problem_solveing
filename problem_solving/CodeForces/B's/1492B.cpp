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
        map<int,bool>mp;
        vector<int> nw;
        //int mx=vec[0];
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            mp[vec[i]]=1;
            
            //if(i>0&&vec[i]>mx) mx=vec[i];
        }
        int mx;
        auto it=mp.end();
        it--;
        int tempn=n;
        mx= (*it).first;
        while(tempn!=0)
        {
            for(int i=tempn-1;i>=0;i--)
            {
                if(mx==vec[i])
                {
                    for(int j=i;j<tempn;j++)
                    {
                        nw.push_back(vec[j]);
                        
                    }
                    tempn=n-nw.size();
                }
                mx=(*it).first;
            }
        }
        



    
    
        for(int i=0;i<n;i++)
        {
            cout<<nw[i]<<' ';
        }
        cout<<'\n';

    }

}