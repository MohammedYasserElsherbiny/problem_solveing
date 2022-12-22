#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;




int main ()
{
    FIO
    int n,p,q;
    set<int> st;
    cin>>n>>p;
    for(int i=0;i<p;i++)
    {
        int l;
        cin>>l;
        st.insert(l);
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int l;
        cin>>l;
        st.insert(l);
    }
    if(st.size()==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";

}