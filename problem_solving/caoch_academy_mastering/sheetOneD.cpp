#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int n;
    cin>>n;
    vector <int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    vector <int> ans1,ans2,ans3;
    ans3.push_back(0);
    for(int i=0;i<n;i++)
    {
        
        if(vec[i]==0)
        {
            continue;
        }
        else if(vec[i]>0)
        {
            ans2.push_back(vec[i]);
        }
        else
        {
            //ans1.push_back(vec[i]);
            if(ans1.size()==0)
            {
                ans1.push_back(vec[i]);
            }
            else
            {
                ans3.push_back(vec[i]);
            }
        }
    }
    if(ans2.size()==0)
    {
        ans2.push_back(ans3[ans3.size()-1]);
        ans2.push_back(ans3[ans3.size()-2]);
        ans3.pop_back();
        ans3.pop_back();
    }


    cout<<ans1.size()<<' ';
    for(int i=0;i<ans1.size();i++)
    {
        cout<<ans1[i]<<' ';
    }
    cout<<'\n';
    cout<<ans2.size()<<' ';
    for(int i=0;i<ans2.size();i++)
    {
        cout<<ans2[i]<<' ';
    }
    cout<<'\n';
    cout<<ans3.size()<<' ';
    for(int i=0;i<ans3.size();i++)
    {
        cout<<ans3[i]<<' ';
    }

}