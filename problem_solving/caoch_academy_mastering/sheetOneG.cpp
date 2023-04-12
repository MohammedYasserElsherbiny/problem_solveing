#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main ()
{
    FIO
    int n;
    cin>>n;
    vector<int> vec(n),ans;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }


    for(int i=0;i<n-1;i++)
    {
        if(vec[i+1]==1)
        {
            ans.push_back(vec[i]);
        }
    }
    ans.push_back(vec[n-1]);



    cout<<ans.size()<<'\n';
    for(int c : ans)
    {
        cout<<c<<' ';
    }
}