#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main ()
{
    FIO

    int n,d;
    cin>>n>>d;
    deque<int> dq;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;

        dq.push_back(temp);
    }

    for(int i=0;i<d;i++)
    {
        int temp=dq.front();

        dq.pop_front();
        dq.push_back(temp);
    }

    for(int i=0;i<n;i++)
    {
        cout<<dq[i]<<' ';
    }

}