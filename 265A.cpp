#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
   string str1,str2;
   cin>>str1>>str2;
   int cnt=1,pos=1;
   for(int i=0+cnt-1;i<str1.size();i++)
   {
        for(int j=0+pos-1;j<str2.size();j++)
        {
            pos++;
            if(str1[i]==str2[j]) 
            {
                cnt++;
                break;

            }
        }
   }
    cout<<cnt;


}