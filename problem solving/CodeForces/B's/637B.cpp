#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;







int main ()
{
    FIO


    int n;
    cin>>n;
    vector <string> vec;
    map <string,bool> vis;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        vec.push_back(temp);
        vis[temp]=1;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(vis[vec[i]])
        {
            cout<<vec[i]<<'\n';
            vis[vec[i]]=0;
        }
    }
    
    



}