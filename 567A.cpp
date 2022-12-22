#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
   int n;
   cin>>n;
   vector <int> vec(n);
   vector <pair<int,int>> pos(n);
   for(int i=0;i<n;i++)
   {
        cin>>vec[i];
   }
   int mn,mx;
   for(int i=0;i<n;i++)
   {
        mx=max(abs(vec[i]-vec[0]),abs(vec[i]-vec[n-1]));
        pos[i].second=mx;
        if(i==0)
        {
            mn=abs(vec[i]-vec[i+1]);
            pos[i].first=mn;
        }
        else if(i==n-1)
        {
            mn=abs(vec[i]-vec[i-1]);
            pos[i].first=mn;
        }
        else
        {
            mn=min(abs(vec[i]-vec[i-1]),abs(vec[i]-vec[i+1]));
            pos[i].first=mn;
        }
   }
   for(int i=0;i<n;i++)
   {
        cout<<pos[i].first<<' '<<pos[i].second<<'\n';
   }


}