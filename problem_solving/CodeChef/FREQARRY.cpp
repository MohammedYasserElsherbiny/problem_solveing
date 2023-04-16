#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        map <int,int> freq;
        bool f=true;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];

            freq[vec[i]]++;

            if(freq[vec[i]]>1) 
            {
               f=0;
            }
        }
        if(f)
        cout<<"prekrasnyy\n";
        else
        cout<<"ne krasivo\n";
    }
    

}