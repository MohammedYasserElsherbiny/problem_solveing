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
            if(j&1 )
            {
                if(vec[j]<=vec[j+1])
                swap (vec[j],vec[j+1]);
            }
            else
            {
                if(vec[j]>=vec[j+1])
                swap(vec[j],vec[j+1]);
            }
        }
    }
}



int main ()
{
    FIO

   int n;
   cin>>n;
   vector <int> vec(n);
   for(int i=0;i<n;i++)
   {
        cin>>vec[i];
   } 
   
   bubble(vec);

   for(int z : vec)
   {
        cout<<z<<' ';
   }



}