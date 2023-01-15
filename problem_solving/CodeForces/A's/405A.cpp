#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
   int n;
   cin>>n;
   vector <int> vec(n);
   for(int i=0;i<n;i++)
   {
        cin>>vec[i];
   }
   sort(vec.begin(),vec.end());
   for(int z:vec)
   {
        cout<<z<<' ';
   }
   
   
   


}