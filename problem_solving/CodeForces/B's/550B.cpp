#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;





int main ()
{
    FIO

    int n,l,r,x,cnt=0;
    cin>>n>>l>>r>>x;
    int arr[n];

    for(int i=0; i<n; i++)cin>>arr[i];
 
    vector<vector<int>>ans;

    // 1 1 1 1 - 1 1 1 0 - 0 1 1 1 - 0 0 0 0 - 1 0 1 0
    // 1 0 0 0 0
    //   1 1 0 1 
    //  1 1 0 1 /  0 0 0 0 0 0 1
   
    for(int msk=0; msk<(1<<n); msk++){
        
        int mn=INT_MAX,mx=-INT_MAX;
        
        vector<int>temp;
        int sum = 0;
        
        for(int i=0; i<n; i++){
            if((msk>>i)&1){
                if(arr[i]<mn) mn=arr[i];
                if(arr[i]>mx) mx=arr[i];
                temp.push_back(arr[i]);
                sum += arr[i];
            }
        }
        
        if((sum>=l&&sum<=r)&&(abs(mn-mx)>=x)&&temp.size()>=2)
        {
            ans.push_back(temp);
            cnt++;
        }
        //ans.insert(temp);
    }
    cout<<cnt;
}