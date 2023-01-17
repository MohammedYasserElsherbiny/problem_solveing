#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    //FIO

    int t;
    cin>>t;
    int a,b;
    while (t--)
    {
        bool f=false;
        cin>>a>>b;
        map<int,int> mpa,mpb;
        int temp=a;
        for(int i=0;i<=31;i++)
        {
            if((temp>>i)&1) mpa[i]=1;
            else mpa[i]=0;
        }
        temp=b;
        for(int i=0;i<=31;i++)
        {
            if((temp>>i)&1) mpb[i]=1;
            else mpb[i]=0;
        }
        vector<int> vec;
        //int mx=max(mpa.size(),mpb.size());
        for(int i=0;i<=31;i++)
        {
            if(mpa[i]==mpb[i]&&mpa[i]==1) vec.push_back(1);
            else vec.push_back(0);
        }
        int sum=0,cnt=1;
        for(int i=0;i<=31;i++)
        {
            sum+=vec[i]*cnt;
            cnt*=2;
        }
        cout<<((sum^a)+(sum^b))<<'\n';

    }


}