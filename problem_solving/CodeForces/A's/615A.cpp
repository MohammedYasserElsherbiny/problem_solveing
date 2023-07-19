#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()

{
    FIO

    int n,m;
    cin>>n>>m;

    set<int> st;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        for(int j=0;j<temp;j++)
        {
            int l;

            cin>>l;
            st.insert(l);
        }
    }

    if(st.size()==m) cout<<"YES";
    else cout<<"NO";
}