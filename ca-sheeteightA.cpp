#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int indx)
{
    if(indx==0)
    {
        return arr[indx];
    }
    else
    {
        return arr[indx]+ sum(arr , indx-1);
    }
}


int main ()
{
    
    int T,s;
    cin>>T;
    int x=0;
    
    while(T--)
    {

        x++;
        cin>>s;
        int arr[100000];
        for(int i=0;i<s;i++)
        {
            cin>>arr[i];
        }
        
        
            cout<<"Case "<<x<<": "<<sum(arr,s-1)<<'\n';
        
    }
    return 0;
}