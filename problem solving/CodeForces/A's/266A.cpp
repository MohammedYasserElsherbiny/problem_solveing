#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
    
    int n;
    cin>>n;
    string str;
    cin>>str;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)continue;
        if(str[i]==str[i-1]) cnt++;
        
    }
    cout<<cnt;
   


}