#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    int n;
    cin>>n;
    //vector<int> vec(n);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        int l;
        cin>>l;

        sum+=l;
    }

    if(sum<0) sum*=-1;

    cout<<sum;

}