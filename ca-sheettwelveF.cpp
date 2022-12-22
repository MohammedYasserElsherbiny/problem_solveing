#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e5+5;
const ll mod = 1e9+7;


void bubble (vector <pair<int,int>>& vec)
{
    int n=vec.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(vec[j].first<vec[j+1].first)
            {
                swap(vec[j],vec[j+1]);
            }
            
        }
    }
}



int main ()
{
    FIO

   int n,k;
   cin>>n>>k;
   pair<int,int>arr[n];
    map<pair<int,int>, int>freq;
 
    for(int i=0; i<n; i++){
        cin>>arr[i].first>>arr[i].second;
        freq[arr[i]]++;
    }
 
    sort(arr, arr+n, [](auto p1, auto p2)
        {
                if(p1.first == p2.first)return p1.second<p2.second;
                return p1.first>p2.first;

        }
    );

   
   cout<<freq[arr[k-1]]<<'\n';



}