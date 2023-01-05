#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
   int arr[5][5];
   int row,clm;
   for(int i=0;i<5;i++)
   {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                row=i+1;
                clm=j+1;
            }
        }
   }
   cout<<abs(row-3)+abs(clm-3);
   
   


}