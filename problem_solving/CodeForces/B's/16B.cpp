#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;





void bubble (vector<pair<int,int>>&vec)
{
    int n=vec.size();
    for(int i=0 ; i<n ; i++ )
    {
        for( int j=0 ; j<n-1 ; j++ )
        {
            if(vec[j].second<vec[j+1].second)
            swap(vec[j],vec[j+1]);
        }
    }
}

int main ()
{
    FIO

    int n,m;
    cin>>n>>m;
    vector <pair<int,int>> vec(m);
    for(int i=0;i<m;i++)
    {
        cin>>vec[i].first>>vec[i].second;
    }
    bubble(vec);
    ll sum=0;
    for(int i=0;i<m;i++)
    {
        if(n==0) break;
        for(int j=0;j<vec[i].first;j++)
        {
            sum+=vec[i].second;
            n--;
            if(n==0) break;
        }
    }
    cout<<sum;
}