#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    int n;
    cin>>n;
    map<string,int> mp;
    vector<string>vec;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        if(count(vec.begin(),vec.end(),temp)==0)
        {
            vec.push_back(temp);
        }
        mp[temp]++;
    }
    if(vec.size()==1)
    {
        cout<<vec[0];
        return 0;
    }

    if(mp[vec[0]]>mp[vec[1]])
    {
        cout<<vec[0];
    }
    else
    cout<<vec[1];
    



}