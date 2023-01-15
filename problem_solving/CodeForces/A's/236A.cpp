#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
   
   string str;
   cin>>str;
   map<char,int> mp;
   int cnt=0;
   for(int i=0;i<(int)str.size();i++)
   {
        if(mp[str[i]])
        {
            continue;
        }
        else
        {
            mp[str[i]]++;
            cnt++;
        }
   }
   if(cnt&1)
   {
        cout<<"IGNORE HIM!";
   }
   else
   cout<<"CHAT WITH HER!";
   
   


}