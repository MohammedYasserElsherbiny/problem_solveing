#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int t;
    cin>>t;
    pair <int,pair<int,int>> ans,temp;
    ans.first=0;
    ans.second.first=0;
    ans.second.second=0;
    while (t--)
    {
        cin>>temp.first>>temp.second.first>>temp.second.second;
        ans.first+=temp.first;
        ans.second.first+=temp.second.first;
        ans.second.second+=temp.second.second;
    }
    if(ans.first==0&&ans.second.first==0&&ans.second.second==0)
    cout<<"YES";
    else
    cout<<"NO";
}