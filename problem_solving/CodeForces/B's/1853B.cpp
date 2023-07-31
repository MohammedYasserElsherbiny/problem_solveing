#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int nextNumber(int a,int b, int k){

    if( a>b ||min(a,b) < 0)
    {
        return 0;
    }
    if(k==0)
    {
        return 1;
    }

    int x=nextNumber(b-a,a,k-1);

    return x;
}
 
 
int main(){
    FIO
    int t;
    cin>>t;
    while(t--){
        int n,k,ans=0;
        cin>>n>>k;
        
        if(k>30)
        {
            cout<<"0\n";
            continue;
        }

        for(int i=0;i<=n;i++)
        {
            ans+=nextNumber(i , n ,k-2);
        }

        cout<<ans<<'\n';


        
    }
    return 0;
}