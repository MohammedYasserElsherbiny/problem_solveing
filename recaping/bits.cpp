#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const ll N = 1e12+105;
const ll mod = 1e9+7;


int main ()
{
    FIO
        // int target,n=6;
        // int counter = 0;
        // int nums[6];
        // for(int i=0;i<6;i++)cin>>nums[i];
        // cin>>target;
        // for(int mask=0; mask < (1<<n); mask++){
        // int sum=0;
        // for(int i=0; i<n; i++)
        //     if((mask>>i)&1)
        //         sum+=nums[i];
        //     if(sum==target)
        //         counter++;
        // }
    
        // cout<<counter;
        for (int i=7;i>=1;i--)
        {
            cout<<i<<"  -->  ";
            for(int j=2;j>=0;j--)
            {
                cout<<((i>>j)&1);
            }
            cout<<'\n';
        }


}