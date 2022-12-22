#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;

bool found=false;

void solve (int arr[],int sum,int tar,int n,int idx)
{
    if(idx==n)
    return ;
    if(sum==tar)
    {
        found=true;
    }

    solve (arr,sum+arr[idx],tar,n,idx+1);
    solve (arr,sum,tar,n,idx+1);
}


int main ()
{
    FIO
    
    int t;
    cin>>t;

    while (t--)
    {
        int tar,n;
        cin>>tar>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        found=false;
        solve(arr,0,tar,n,0);

        if (found)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
    
    
    

}