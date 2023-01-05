#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO


    int n,m,k,t;
    cin>>n>>m>>k>>t;
    map <pair<int,int>,char> mp;
    pair <int,int> temp;
    for(int i=0;i<k;i++)
    {
        cin>>temp.first>>temp.second;
        mp[temp]='W';
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=m;j++)
        {
            temp.first=i;
            temp.second=j;
            if(mp[temp]=='W') 
            {
                
                continue;
            }
            if(cnt%3==0) 
            {
                cnt++;
                mp[temp]='C';
            }
            else if(cnt%3==1) 
            {
                cnt++;   
                mp[temp]='K';
            }
            else 
            {
                cnt++;   
                mp[temp]='G';
            }
        }
    }
    for(int i=0;i<t;i++)
    {
        
        cin>>temp.first>>temp.second;
        if(mp[temp]=='W')
        cout<<"Waste\n";
        else if(mp[temp]=='C')
        cout<<"Carrots\n";
        else if(mp[temp]=='K')
        cout<<"Kiwis\n";
        else
        cout<<"Grapes\n";
    }

}