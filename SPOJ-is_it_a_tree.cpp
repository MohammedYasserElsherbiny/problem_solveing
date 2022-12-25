#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N= 1e4+5;




vector <int> adj[N];
vector<bool> vis(N,0);
void dfs (int node)
{
    vis[node]=true;

    for(auto ch: adj[node])
    {
        if(vis[ch]==false)
        {
            dfs(ch);
        }
    }
}

int main ()
{
    FIO

    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    for(int i=1;i<=n;i++)
    {
        if(vis[i]==false)
        {
            cout<<"NO";
            return 0;
        }
    }
    if(m==n-1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}