#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;

int n,k;
vector<int> a(n);
vector<int> b(n);

bool solve (int mid)
{
    int tempk=k;
    for(int i=0;i<n;i++)
    {
        int cost=mid*a[i];
        if(cost>b[i])
        {
            int temp=cost-b[i];
            if(temp>tempk)
            {
                return false;
            }
            else
            {
                tempk-=temp;
            }
        }
    }
    return true;
}



int main ()
{
    FIO
    cout<<"H";

    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int lo=0 , hi=INT_MAX,mid,ans; 
    while (lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        if(solve(mid))
        {
            ans=mid;
            lo=mid;
        }
        else
        {
            hi=mid;
        }
        
    }
    cout<<ans;
    return 0;
    

}