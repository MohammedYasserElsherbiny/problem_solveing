#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e5+5;
const ll mod = 1e9+7;

int main ()
{
    FIO;
    vector <int> vec;
    int n;
    int count=0;
    vector <int>x;
    cin>>n;
    int l;
    cin>>l;
    vec.push_back(l);
    if (n==1)
    {
        cout<<n<<'\n'<<l;
        exit(0);
    }
    for(int i=1;i<n;i++)
    {
        cin>>l;
        vec.push_back(l);
        if(vec[i]<=vec[i-1])
        {
            x.push_back(vec[i-1]);
            count++;
        }
        if(i==n-1)
        {
            x.push_back(vec[i]);
            count++;
        }

    }
    cout<<count<<'\n';
    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<' ';
    }

}