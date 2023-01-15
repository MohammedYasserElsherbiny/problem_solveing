#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e5+5;
const ll mod = 1e9+7;


void bubble (vector <int>& vec)
{
    int n=vec.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            
            
        }
    }
}



int main ()
{
    FIO

   
    int n;
    cin>>n;
    vector<pair<int,int>>vec(n);
    for(auto& p: vec){
        cin>>p.first>>p.second;
    }
    sort(vec.begin(), vec.end());
    bool f= 0;
   for(int i=0; i<n-1;i++)
   {
    
    
       if (vec[i+1].second<vec[i].second)
       {
            f=1;
            
            
       } 
        
   }
   if(f) cout<<"Happy Alex";
   else cout<<"Poor Alex";
    
    
    
   



}