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
    
    int n;
    cin>>n;
    while (n--)
    {
        string str;
        cin>>str;
        int temp=str.size();
        if(temp<=10)
        {
            cout<<str<<'\n';
        }
        else
        {
            cout<<str[0]<<temp-2<<str[temp-1]<<'\n';
        }
    }
   
    
}