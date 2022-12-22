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
    
    unsigned int n;
    cin>>n;
    while(n!=0)
    {
        
        unsigned int temp =sqrt(n);
        if(temp *temp==n) cout<<"yes\n";
        else cout<<"no\n";
        cin>>n;

    }
   
    
}