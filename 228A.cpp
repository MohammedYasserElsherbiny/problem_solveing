#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
   map <int,int> mp;
   int temp,cnt=0;
   cin>>temp;
   mp[temp]++;
   for(int i=0;i<3;i++)
   {
        cin>>temp;
        if(mp[temp]) cnt++;
        else mp[temp]++;
   }
   
   cout<<cnt;


}