#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO
    

    int n;
    cin>>n;
    //vector <vector<int>>vec(n);
    char vec[n][n];
    set <char> st;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>vec[i][j];
            st.insert(vec[i][j]);
        }
    }
    if(st.size()!=2)
    {
        cout<<"NO";
        return 0;
    }
    char temp=vec[0][0];
    bool f=true;
    for(int i=0;i<n;i++)
    {
        if(vec[i][i]==temp)
        {
            continue;
        }
        else
        f=false;
        if(!f) break;
        
    }
    if(!f)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=n-1, j=0;i>=0&&j<n;i--,j++)
    {
        if(vec[i][j]==temp)
        {
            continue;
        }
        else
        f=false;
        if(!f) break;
    }
    if(!f)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j||i+j==n-1) continue;
            // if(i+j==n-1)
            // {
            //     if(vec[i][j]!=temp)
            //     {
            //         continue;
            //     }
            // }
            if(vec[i][j]==temp)
            {
                f=false;
                break;
            }
        }
    }
    if(!f)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";




}