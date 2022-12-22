#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO
    
    int n;
    cin>>n;
    vector <int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int lo=0,hi=n-1,mid,ans=0,tar;
    cin>>tar;
    while (lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        if(vec[mid]==tar)
        {
            ans=mid;
            break;
        }
        else if(vec[mid]>tar)
        {
            hi=mid-1;
        }
        else
        {
            lo=mid+1;
        }
    }
    if(ans==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
}