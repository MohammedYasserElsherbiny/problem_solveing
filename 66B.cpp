#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;


int main ()
{
    FIO
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int mx=0;
    for(int i=0;i<n;i++)
    {
        int temp=1;
        for(int j=i-1;j>=0;j--)
        {
            if(vec[j+1]>=vec[j])
            temp++;
            else 
            break;
        }
        for(int j=i+1;j<n;j++)
        {
            if(vec[j-1]>=vec[j])
            temp++;
            else
            break;
        }
        mx=max(mx,temp);

    }
    cout<<mx;
}