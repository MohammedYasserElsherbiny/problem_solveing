#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0),cin.tie(0);
#define ll long long



void bubble(vector <pair<int,int>>& vec)
{
    int n=vec.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(vec[j].first>vec[j+1].first)
            {
                swap(vec[j],vec[j+1]);
            }
            else if(vec[j].first==vec[j+1].first&&vec[j].second>vec[j+1].second)
            {
                swap(vec[j],vec[j+1]);
            }
        }
    }
}




int main ()
{
    FIO

    
    int s,n;
    cin>>s>>n;
    vector <pair<int,int>> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i].first>>vec[i].second;
    }
    bubble(vec);
    bool f=true;
    for(int i=0;i<n;i++)
    {
        if(s>vec[i].first)
        {
            s+=vec[i].second;
        }
        else
        {
            f=false;
            break;
        }
    }
    if(f) cout<<"YES";
    else cout<<"NO";

    
    

}