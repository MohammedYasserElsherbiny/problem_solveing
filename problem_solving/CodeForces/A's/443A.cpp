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
    int cnt=0;
    map<char,int> mp;
    char ch;
    cin>>ch;
    while (ch!='}')
    {
        cin>>ch;
        if(ch>='a'&&ch<='z')
        {
            if (mp[ch])
            { }
            else
            {
                cnt++;
                mp[ch]++;
            }
        }
    }
   cout<<cnt;
   
    
}