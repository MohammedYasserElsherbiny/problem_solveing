#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO
    string arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
        // for(int j=0;j<4;j++)
        // {
        //     cin>>arr[i][j];
        // }
    }
    vector <string> vec;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            string temp;
            temp+=arr[i+1][j];
            temp+=arr[i+1][j+1];
            temp+=arr[i][j];
            temp+=arr[i][j+1];
            //temp=arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
            vec.push_back(temp);
        }
    }

    for(int i=0;i<vec.size();i++)
    {
        int cnt1=0,cnt2=0;
        for(int j=0;j<4;j++)
        {
            if(vec[i][j]=='.') cnt1++;
            else cnt2++;
        }
        if(cnt1>=3||cnt2>=3) 
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}