#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll unsigned long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const ll N = 1e12+105;
const ll mod = 1e9+7;


int main ()
{
    //FIO

    int n;
    cin>>n;
    vector<char>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    char mx=*max_element(vec.begin(),vec.end());
    int cnt=0;
    vector <char> tt(n-1);
    for(int i=vec.size()-1;i>=0;i--)
    {
        char ch=vec[i];
        if(vec[i]==mx&&cnt<=0) 
        {
            cnt++;
            continue; 

        }
        tt[i]=vec[i];
        
    }
    for(int i=0;i<n;i++)
    {
        if(tt[i]<='z'&&tt[i]>='a')
        cout<<tt[i];
    }

    
}
    // int n,k;
    // cin>>n>>k;
    // // if(k==0)
    // // {
    // //     cout<<5;
    // //     return 0;
    // // }
    // vector<int> vec(n);
    // for(int i=0;i<n;i++)
    // {
    //     cin>>vec[i];
    // }
    // sort(vec.begin(),vec.end());
    // int temp,cnt=0;
    // temp=vec[k-1];
    // for(int i=0;i<n;i++)
    // {
    //     if(temp>=vec[i])
    //     {
    //         cnt++;
    //     }
    // }
    // if(cnt!=k)
    // cout<<-1;
    // else 
    // cout<<temp;

    // multiset <int> st;
    // vector <int> vec;
    // int n,q;
    // cin>>n>>q;
    // for(int i=0;i<n;i++)
    // {
    //     int temp;
    //     cin>>temp;
    //     st.insert(temp);
    // }
    // for(int val : st)
    // {
    //     vec.push_back(val);
    // }
    // reverse(vec.begin(),vec.end());
    // while (q--)
    // {
    //     int x,z;
    //     cin>>x>>z;
        
    //     if(x==1)
    //     {
    //         for(int i=0;i<st.size();i++)
    //         {
                
    //             if(i==z-1)
    //             {
    //                 vec[i]=1-vec[i];
    //                 break;
    //             }
    //         }
    //     }
    //     else
    //     {
    //         for(int i=0;i<st.size();i++)
    //         {
                
    //             if(i==z-1)
    //             {
    //                 cout<<vec[i]<<'\n';
    //                 break;
    //             }
    //         }
    //     }
        
    // }