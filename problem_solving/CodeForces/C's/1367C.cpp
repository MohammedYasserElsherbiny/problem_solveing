#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()

{
    FIO
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        //input
        vector<int> pref(n+2,-1);
        vector<int> suf(n+2,-1);
        //creating prefix and suffix array
        if(str[0]=='1')
        {
            pref[0]=0;
        }
        if(str[n-1]=='1')
        {
            suf[n-1]=n-1;
        }
        //initiating the basic values for the prefix and suffix array
        for(int i=1;i<n;i++)
        {
            if(str[i]=='1')
            {
                pref[i]=i;
            }
            else
            {
                pref[i]=pref[i-1];
            }
        }
        //prefix array operation
        for(int i=n-2;i>=0;i--)
        {
            if(str[i]=='1')
            {
                suf[i]=i;
            }
            else
            {
                suf[i]=suf[i+1];
            }
        }
        //suffix array operation
        int ans=0,temp1,temp2;
        //temp1 and temp2 is the difference values
        for(int i=0;i<n;i++)
        {
            temp1=INT_MAX;
            temp2=INT_MAX;
            if(pref[i] !=-1)
            {
                temp1=i-pref[i];
            }
            if(suf[i]!=-1)
            {
                temp2=suf[i]-i;
            }
            if(temp1>k&&temp2>k)
            {
                ans++;
                pref[i]=i;
            }
            //the distance is good to insert one

            if(pref[i]>pref[i+1])
            {
                pref[i+1]=pref[i];
            }
            //there is a one that is newly inserted and the distance is being updated
        }
       
       cout<<ans<<'\n';

    }

}



