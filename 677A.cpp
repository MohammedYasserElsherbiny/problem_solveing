#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO
    int n,h;
    cin>>n>>h;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>h)
        {
            sum+=2;
        }
        else
        {
            sum++;
        }
    }
    cout<<sum;
}