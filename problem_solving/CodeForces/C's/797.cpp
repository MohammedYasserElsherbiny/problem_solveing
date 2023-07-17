#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    //   wrong!!
    string str;
    cin>>str;
    vector<int> vec;

    for(int i=0;i<str.size();i++)
    {
        vec.push_back(str[i]);
    }

    sort(vec.begin(),vec.end());

    for(int i=0;i<str.size();i++)
    {
        cout<<char(vec[i]);
    }
}