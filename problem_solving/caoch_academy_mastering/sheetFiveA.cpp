#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;

//   . . . . . .
// 0  0 1 1 1 1 1   0
// 0  0 1 2 3 4 5   5    

//    # . . # # # 
// 0  0 0 1 0 1 1   0 
// 0  0 0 1 1 2 3   3
int main ()
{
    FIO

    string str;
    cin>>str;
    vector<int> vec(str.size(),0),pref(str.size(),0);
    for(int i=0;i<str.size()-1;i++)
    {
        if(str[i]==str[i+1])
        {
            vec[i+1]=1;
        }
        else
        {
            vec[i+1]=0;
        }
    }
    for(int i=1;i<str.size();i++)
    {
        pref[i]=pref[i-1]+vec[i];
    }
    int t;
    cin>>t;
    while (t--)
    {
        int l,r;
        cin>>l>>r;
        l--,r--;
        cout<<pref[r]-pref[l]<<'\n';
    }
    
}