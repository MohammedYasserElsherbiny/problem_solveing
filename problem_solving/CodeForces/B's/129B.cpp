#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;





int main()
{
    FIO
    
    int n,m,cnt=0;

    cin>>n>>m;

    multimap<int,int> mp;
    map<int,int> laces;

    for(int i=0;i<m;i++)
    {
        pair<int,int> p,p2;

        cin>>p.first>>p.second;
        p2.first=p.second,p2.second=p.first;
        mp.insert(p);
        mp.insert(p2);
        laces[p.first]++;
        laces[p.second]++;

    }

    int stu=0;

    for(auto& p : mp)
    {
        if(laces[p.first]<=1)
        {
            laces[p.second]--;
            laces[p.first]--;
            //mp.erase(p.first);
            //mp.erase(p.second);
            cnt++;
        }

        if(laces[p.second]==0)
        {
            stu++;
        }
    }

    cout<<n-stu;

}