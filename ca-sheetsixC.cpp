#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e9+5;
const ll mod = 1e9+7;



int main ()
{
    FIO;
    int n;
    cin>>n;
    vector <int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int l=0,r=n/2,ans=n;
    while (l<n/2&&r<n)
    {
        if(vec[l]*2<=vec[r])
        {
            ans--;
            l++,r++;
        }
        else
        {
            r++;
        }
    }
    cout<<ans;
}