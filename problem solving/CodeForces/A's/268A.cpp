#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
   
   map <int,int> mp,mp2;
   int n;
   cin>>n;
   vector <int> vec;
   while (n--)
   {
        int temp;
        cin>>temp;
        mp[temp]++;
        cin>>temp;
        mp2[temp]++;
        //if(mp2[temp]>1) continue;
        vec.push_back(temp);
   }
   int sum=0;
   for(int i=0;i<(int)vec.size();i++)
   {
        if(mp[vec[i]]) sum+=mp[vec[i]];
   }
   cout<<sum;
   
   
   
   
   


}