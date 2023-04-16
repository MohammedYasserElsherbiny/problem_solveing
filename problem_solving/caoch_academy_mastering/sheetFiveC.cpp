#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N=2e5+5;
//   . . . . . .
// 0  0 1 1 1 1 1   0
// 0  0 1 2 3 4 5   5    

//    # . . # # # 
// 0  0 0 1 0 1 1   0 
// 0  0 0 1 1 2 3   3
int main ()
{
    FIO

    
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> vec(N+1,0),intersectionprefixsum(N+1,0),prefixsum(N+1,0);
    for(int i=0;i<n;i++)
    {
        int tempL,tempR;
        cin>>tempL>>tempR;
        vec[tempL]++;
        vec[tempR+1]--;
    }

    for(int i=1;i<=N;i++)
    {
        intersectionprefixsum[i]=vec[i]+intersectionprefixsum[i-1];
    }

    for(int i=1;i<N;i++)
    {
        if(intersectionprefixsum[i]>=k)
        {
            intersectionprefixsum[i]=1;
        }
        else
        {
            intersectionprefixsum[i]=0;
        }
    }

    for(int i=1;i<N;i++)
    {
        prefixsum[i]=intersectionprefixsum[i]+prefixsum[i-1];
    }    
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin>>l>>r;

        cout<<prefixsum[r]-prefixsum[l-1]<<'\n';
    }

    
    
}