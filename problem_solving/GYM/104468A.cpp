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
        int cnt=0,n;
        cin>>n;
        vector<int> a(n),b(n);
        map <int,int> mpA,mpB;

        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
            mpA[a[i]]++,mpB[b[i]]++;
        }

        for(int i=0;i<n;i++)
        {
            if(mpA[a[i]]>1)
            {
                if(mpB[a[i]]==0&&mpA[b[i]]==0)
                { 
                    cnt++;
                    mpB[a[i]]++,mpA[a[i]]--;
                    mpB[b[i]]--,mpA[b[i]]++;
                }

                if(mpB[a[i]]==0) mpB.erase(a[i]);
                if(mpA[b[i]]==0) mpA.erase(b[i]);
                if(mpB[b[i]]==0) mpB.erase(b[i]);
                if(mpA[a[i]]==0) mpA.erase(a[i]);

            }
            else if(mpB[b[i]]>1)
            {
                if(mpA[b[i]]==0&&mpB[a[i]]==0) 
                {
                    cnt++;
                    mpB[b[i]]--,mpA[b[i]]++;
                    mpB[a[i]]++,mpA[a[i]]--;
                }

                if(mpB[a[i]]==0) mpB.erase(a[i]);
                if(mpA[b[i]]==0) mpA.erase(b[i]);
                if(mpB[b[i]]==0) mpB.erase(b[i]);
                if(mpA[a[i]]==0) mpA.erase(a[i]);

            }
        }
        if(mpA.size()==n && mpB.size()==n)
        {
            cout<<cnt<<'\n';
        }
        else cout<<"-1\n";

    }

}