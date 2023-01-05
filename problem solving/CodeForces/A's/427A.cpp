#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
   
    int n;
    cin>>n;
    int poli=0,crime=0;
    for(int i=0;i<n;i++)
    {
        int temp;

        
        cin>>temp;
        if(temp<0) 
        {
            if(poli>0)
            {
                poli+=temp;
            }
            else
            crime++;
        }
        else
        {
            poli+=temp;
        }

    }
   
    cout<<crime;


}