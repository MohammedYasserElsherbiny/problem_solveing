#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
#define ll long long
using namespace std;


int main ()
{

    int t;
    cin>>t;
    int c=0;

    for(int i=1;i<=t;i++)
    {

        
        int n;
        n=i;
       
        vector <ll>vec;
        for(int i=2;i*i<=n;i++)
        {
            
            int count =0;
            while (n%i==0)
            {
                n/=i;
                count++;
            }
            if(count)
            {
                vec.push_back(1);
            }
        }
        if(1<n)
        {
            vec.push_back(1);
        }
        if((int)vec.size()==2)
        {
            c++ ;          
        }
        
        
    }
    cout<<c;
}