#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
   string str;
   cin>>str;
   int sz=str.size(),cntl=0,cntu=0;
   for(int i=0;i<sz;i++)
   {
        if(str[i]>='a') cntl++;
        else cntu++;
   }
   if(cntu<=cntl )
   {
        for(int i=0;i<sz;i++)
        {
            str[i]=tolower(str[i]);
        }
   }
   else
   {
    for(int i=0;i<sz;i++)
    {
        str[i]=toupper(str[i]);
    }
   }
   cout<<str;
   
   
   
   


}