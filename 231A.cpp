#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
   int n,cnt=0;
   cin>>n;
   while (n--)
   {
        int sum=0,temp;
        for(int i=0;i<3;i++)
        {
            cin>>temp;
            if(temp==1) sum++;
        }
        if(sum>=2) cnt++;
   }
   cout<<cnt;
   


}