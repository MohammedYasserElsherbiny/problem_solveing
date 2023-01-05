#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    int n,m;
    cin>>n>>m;
    vector<char>vec(n*m);
    for(int i=0;i<n*m;i++)
    {
        cin>>vec[i];
    }
    if(count(vec.begin(),vec.end(),'C')==0&&count(vec.begin(),vec.end(),'Y')==0&&count(vec.begin(),vec.end(),'M')==0)
    {
        cout<<"#Black&White";
    }
    else
    {
        cout<<"#Color";
    }
    



}