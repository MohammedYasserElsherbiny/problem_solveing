#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
   int a,b,sum=0;
   cin>>a>>b;
   for(int i=0;i<200000;i++)
   {
        if(a>b)
        {
            cout<<sum;
            break;
        }
        b*=2;
        a*=3;
        sum++;
   }


}