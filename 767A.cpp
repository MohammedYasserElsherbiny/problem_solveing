#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);



int main ()
{
    FIO

    int n;
    cin>>n;
    vector <int> candes(n);
    for(int i=0;i<n;i++)
    {
        cin>>candes[i];
    }
    
    stack <int> st;
    st.push(candes[0]);

    for (int i=1;i<n;i++)
    {
        if(st.top()==n)
        {
            
            
        }
        else
        {
            
        }
    }
    
}