#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{

    FIO

    int n,sum=0,eng=0;
    cin>>n;
    vector <int> vec(n+1);
    vec[0]=0;
    for(int i=1;i<n+1;i++)
    {
        cin>>vec[i];
    }
    /*
    for(int i=0;i<n;i++)
    {
        int temp=vec[i]-vec[i+1];

        if(eng+temp<0)
        {
            sum+=abs(temp);
            eng=0;
        }
        else
        {
            eng+=temp;
        }
    }
    cout<<sum;
    */
   cout<<*max_element(vec.begin(),vec.end());

}