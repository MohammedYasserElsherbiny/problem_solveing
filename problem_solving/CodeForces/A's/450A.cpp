#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int n,m;
    cin>>n>>m;
    deque<pair<int,int>> dq;
    for(int i=0;i<n;i++)
    {
        pair<int,int> l;
        cin>>l.first;
        l.second=i+1;
        dq.push_back(l);
    }
    while(dq.size()!=1)
    {
        if(dq.front().first>m)
        {
            pair<int,int> temp;
            temp.first= dq.front().first-m;
            temp.second=dq.front().second;
            dq.push_back(temp);
            dq.pop_front();
        }
        else
        {
            dq.pop_front();
        }
    }
    cout<<dq.front().second;

}