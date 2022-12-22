#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
   int n,temp,cnt=1;
   cin>>n;
   vector <int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        if(i==0)
        continue;
        else if(vec[i]!=vec[i-1]) cnt++;
        
    }
    cout<<cnt;
   
   
   
   
   


}