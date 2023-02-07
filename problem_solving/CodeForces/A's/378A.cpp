#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
   int f,s,cntf=0,cntd=0,cnts=0;
   cin>>f>>s;
   for(int i=1;i<=6;i++)
   {
        if(abs(i-f)==abs(i-s))
        {
            cntd++;
        }
        else if (abs(i-f)<abs(i-s))
        {
            cntf++;
        }
        else 
        cnts++;
   }
   cout<<cntf<<' '<<cntd<<' '<<cnts;
   


}