#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int n,k;
    cin>>n>>k;
    vector<int>vec(2*n+1);
    //int mx=-INT_MAX;
    for(int i=0;i<2*n+1;i++)
    {
        cin>>vec[i];
        //mx=max(mx,vec[i]);
    }
    int prv=vec[0];
    cout<<prv<<' ';
    for(int i=1;i<2*n;i++)
    {
        if((vec[i]>prv&&vec[i]>vec[i+1]&&k>0)&&(vec[i]-1>prv&&vec[i]-1>vec[i+1]))
        {
            cout<<vec[i]-1<<' ';
            k--;
        }
        else
        {
            cout<<vec[i]<<' ';
        }
        prv=vec[i];
        //k--;
    }
    cout<<vec[2*n];

}