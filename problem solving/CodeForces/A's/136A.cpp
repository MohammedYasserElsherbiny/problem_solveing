#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
   
   int n;
   cin>>n;
   map <int,int> mp;
   for(int i=0;i<n;i++)
   {
        int temp;
        cin>>temp;
        mp[temp]=i+1;
   }
   for(auto p : mp)
   {
        cout<<p.second<<' ';
   }


}