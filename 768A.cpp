#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);




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
    int mx=*max_element(vec.begin(),vec.end());
    int mn=*min_element(vec.begin(),vec.end());
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i]>mn&&vec[i]<mx)
        {
            cnt++;
        }
    }
    cout<<cnt;
}