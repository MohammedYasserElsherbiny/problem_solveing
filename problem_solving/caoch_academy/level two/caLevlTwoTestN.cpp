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
    
    string str;
    int cntz=0,cnto=0;
    cin>>str;
    
    for(int i=0;i<(int)str.size();i++)
    {
        if(str[i]=='1')
        {
            cntz=0;
            cnto++;
            if(cnto==7)
            {
                break;
            }
            
        }
        else
        {
            cnto=0;
            cntz++;
            if(cntz==7)
            {
                break;
            }
        }
    }
    if(cntz>=7||cnto>=7)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
    
    
    
}