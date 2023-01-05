#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
#define ll long long
using namespace std;




int main ()
{
    FIO;
    int n,k,q,count=0;
    cin>>n>>k>>q;
    int pref1[200005]={0};
    int minTemp=INT_MAX,maxTemp=-INT_MAX;
    while (n--)
    {
        int l,r;
        cin>>l>>r;
        pref1[l]++;
        pref1[r+1]--;
    }
    int pref[200005]={0};
    for(int i=1;i<=200005;i++)
    {
        pref1[i]=pref1[i]+pref1[i-1];
        if(pref1[i]>=k)
        {
            pref[i]+=1;
        }
    }
    
    for(int i=1;i<200005;i++)
    {
        pref[i]+=pref[i-1];
    }
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<pref[r]-pref[l-1]<<'\n';
    }

}