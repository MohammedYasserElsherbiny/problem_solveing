#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main ()
{
    FIO
    int n;
    cin>>n;
    vector<int>vec(n);
    set <int> st;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        st.insert(vec[i]);
    }
    if(st.size()==1&&vec.size()>1)
    {
        cout<<"NO";
        return 0;
    }
    vector<int>cnts(st.size());
    auto it=st.begin();
    for(int i=0;i<st.size();i++)
    {
        cnts[i]=count(vec.begin(),vec.end(),*it);
        it++;
    }
    bool f=false;
    for(int i=0;i<st.size();i++)
    {
        if(vec.size()-cnts[i]>=cnts[i]-1)
        {
            f=true;
        }
        else
        {
            f=false;
            break;
        }
    }
    if(f)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}