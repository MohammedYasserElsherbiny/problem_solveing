#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    float n,d;
    ll cnt=0;
    cin>>n>>d;
    vector<ll> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    for(int i=1;i<n;i++)
    {
        if(vec[i-1]>=vec[i])
        {
            float temp =  (vec[i-1]/d);
            float temp2 =  (vec[i]/d);
            temp= ceil(abs( temp-temp2));
            // 4 --> 2
            // 2 --> 1
            if (temp==0)
                temp++;
            //temp--;
            cnt+=temp;
            vec[i]+=temp*d;
            if(vec[i]==vec[i-1])
            {
                cnt++;
                vec[i]+=d;
            }

        }
    }

    cout<<cnt;
}