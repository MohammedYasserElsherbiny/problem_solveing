#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;

int n,k;

bool solve (int mid,vector<int> a,vector<int> b)
{
    ll tempk=k;
    for(int i=0;i<n;i++)
    {
        ll cost=mid*a[i];
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
    //cout<<"H";

    cin>>n>>k;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int mxb=*max_element(b.begin(),b.end());
    ll lo=0 , hi=(mxb+k)+1,mid,ans=0; 
    while (lo<=hi&&hi-lo!=1)
    {
        mid=lo+(hi-lo)/2;
        if(solve(mid,a,b))
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