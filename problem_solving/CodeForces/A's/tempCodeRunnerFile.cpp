#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main ()
{
    FIO

    int n;
    cin>>n;
    set<int> st;
    for(int i=0;i<n;i++)
    {
       int temp;
       cin>>temp;
       st.insert(temp);
    }
    auto it= st.begin();
    if(st.size()>1)
    it++;
    cout<<*it;
}