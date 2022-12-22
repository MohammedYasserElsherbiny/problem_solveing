#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
int N=1e5;


int main()
{
    FIO
   
    vector <int> vec(4);
    for(int i=0;i<4;i++)
    {
        cin>>vec[i];
    }
    string str;
    cin>>str;
    int sum=0;
    vector<int> freq(N,0);
    for(int i=0;i<(int)str.size();i++)
    {
        
        if(str[i]=='1')
        {
            sum+=vec[0];
        }
        else if(str[i]=='2')
        {
            sum+=vec[1];
        }
        else if(str[i]=='3')
        {
            sum+=vec[2];
        }
        else 
        {
            sum+=vec[3];
        }
    }
    
    
    cout<<sum;
    

}