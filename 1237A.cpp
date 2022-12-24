#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int n,sum=0;
    cin>>n;
    vector <pair<int,bool>> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i].first;
        vec[i].second=true;
        if(vec[i].first>0)
        {
            if(vec[i].first%2!=0)
            {
                vec[i].first=vec[i].first/2+1;
            }
            else 
            {
                vec[i].second=false;                
                vec[i].first/=2;
            }
        }
        else
        {
            if(abs(vec[i].first)%2!=0)
            {
                vec[i].first=vec[i].first/2-1;
            }
            else 
            {
                vec[i].second=false;                
                vec[i].first/=2;
            }
        }
        sum+=vec[i].first;
    }
    int i=0;
    while (sum != 0)
    {
        if(sum>0&&vec[i%n].second)
        {
            vec[i%n].first--;
            sum--;
        }
        else if(vec[i%n].second)
        {
            vec[i%n].first++;
            sum++;
        }
        i++;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<vec[i].first<<'\n';
    }
}