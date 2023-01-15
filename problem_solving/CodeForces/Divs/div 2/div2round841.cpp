#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll unsigned long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const ll N = 1e12+105;
const ll mod = 1e9+7;





int main ()
{
    FIO
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll sum=0;
        ll temp;

       
       sum=(n*n)%mod;
       sum=(sum+n)%mod;
       sum/=2;
        sum=(sum*sum)%mod;
       if(n%2!=0)
       {
            sum=(sum*2022)%mod;
            cout<<sum<<'\n';
       }
       else
       {
            sum/=2;
            sum-=n;
            sum=(sum*2022)%mod;
            cout<<sum<<'\n';
       }
        





        
        
        // // for(ll i=1;i<=n;i++)
        // // {
        // //     sum=(sum+(i*i))%mod;
        // // }
        // sum=(sum+(n*n))%mod;
        // for(ll i=2,j=1;i<=n;i++,j++)
        // {
        //     sum=(sum+(i*j))%mod;
        //     sum=(sum+(j*j))%mod;
        // }
        // cout<<(sum*2022)%mod<<'\n';

    }
}
































// int main ()
// {
//     FIO

//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<unsigned long long> vec(n);
//         for(int i=0;i<n;i++)
//         {
//             cin>>vec[i];
//         }
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 vec[i]=vec[i]*vec[j];
//                 vec[j]=1;
//             }
//         }
//         unsigned long long sum=0;
//         for(int i=0;i<n;i++)
//         {
//             sum+=vec[i];
//         }
//         sum*=2022;
//         cout<<sum<<'\n';
//     }


// }