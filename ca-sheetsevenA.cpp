#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const ll N = 1e12+105;
const ll mod = 1e9+7;




int main ()
{
    FIO
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,bita=0,bitb=0;
        map <int,int>mpa,mpb;
        cin>>a>>b;
        int temp=a;
        for(int i=0;i<=31;i++)
        {
            int tt=temp>>i;
            if((temp>>i)&1)
            mpa[i]=1;
        }
        temp=b;
        for(int i=0;i<=31;i++)
        {
            if((temp>>i)&1)
            mpb[i]=1;
        }
        vector <int> ans;
        for(int i=0;i<=31;i++)
        {
            if(mpa[i]==mpb[i]&&mpa[i]==1)
            {
                ans.push_back(i);
            }
        }
        int sum=0;
        for(int i=0;i<ans.size();i++)
        {
          
            
                sum+=1<<ans[i];
            
        }
        cout<<(((a^(sum))+b^(sum)))<<'\n';

    }


}