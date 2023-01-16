#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main ()
{
    FIO

    string str;
    cin>>str;
    vector <int> vec;
    vec.push_back(0);
    int cnt=0;
    for(int i=0;i<str.size()-1;i++)
    {
        if(str[i]==str[i+1]) cnt++;

        vec.push_back(cnt);
    }
    int m;
    cin>>m;
    while (m--)
    {
        int l,r;
        cin>>l>>r;
        cout<<vec[r-1]-vec[l-1]<<'\n';
    }


}