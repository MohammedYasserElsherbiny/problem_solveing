#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
   
   string str1,str2;
   cin>>str1>>str2;
   int ans=0;
   for(int i=0;i<(int)str1.size();i++)
   {
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
        if(str1[i]>str2[i])
        {
            ans=1;
            break;
        }
        else if(str2[i]>str1[i])
        {
            ans=-1;
            break;
        }

   }
   cout<<ans;
   
   
   


}