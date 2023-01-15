#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO
    int n,cnt=0;
    string str;
    vector<int> vec;
    cin>>n>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='B')
        {
            cnt++;
            if(i+1<=n-1)
            if(str[i+1]=='W')
            {
                vec.push_back(cnt);
                cnt=0;
            }
        }
    }
    if(cnt!=0)vec.push_back(cnt);
    cout<<vec.size()<<'\n';
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<' ';
    }
}