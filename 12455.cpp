#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;

int ans;



void solve (vector <int> vec,int sum,int idx,int n,int s)
{

    if(sum==s)
    ans=1;

    if(idx==n)
    return ;


    solve (vec,sum,idx+1,n,s);
    solve (vec,vec[idx]+sum,idx+1,n,s);

}




int main ()
{
    FIO
    

    int t;
    cin>>t;
    while (t--)
    {
        int n,s;
        cin>>s>>n;
        vector <int> vec;
        for(int i=0;i<n;i++)
        {
            int l;
            cin>>l;
            vec.push_back(l);
        }
        ans=0;
        solve (vec,0,0,n,s);
        if(ans)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }

}