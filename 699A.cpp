#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main ()
{
    FIO
    

    int n;
    cin>>n;
    vector <ll> vec(n);
    string str;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    bool f =false;
    vector <int> ans;
    for(int i=0;i<n-1;i++)
    {
        if(str[i]=='R'&&str[i+1]=='L')
        {
            ans.push_back((abs(vec[i]-vec[i+1]))/2);
        }
    }
    
    if(ans.size()==0) cout<<-1;
    else cout<<*min_element(ans.begin(),ans.end());
    
    

}