#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO


    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        set <int> st;
        vector<int>vec;
        for(int i=0;i<n+m;i++)
        {
            int temp;
            cin>>temp;
            vec.push_back(temp);
            st.insert(temp);
        }

        cout<<vec.size()-st.size()<<'\n';
    }

}