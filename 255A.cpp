#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main ()
{
    FIO
    
    int n,mx;
    cin>>n;
    vector<int> vec(3,0);
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vec[i%3]+=temp;
    }
    mx=*max_element(vec.begin(),vec.end());
    if(mx==vec[0])
    {
        cout<<"chest";
    }
    else if(mx==vec[1])
    {
        cout<<"biceps";
    }
    else
    {
        cout<<"back";
    }
}