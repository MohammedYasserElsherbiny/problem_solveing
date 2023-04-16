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

    
    int n;
    cin>>n;
    vector<int> vec(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
    }
    vector<int> vec2(n+1);
    vec2=vec;
    reverse(vec2.begin(),vec2.end());
    int m;
    cin>>m;
    while (m--)
    {
        int type , l , r ;
        cin>>type>>l>>r; 
        if(type==1)
        {
            cout<<vec[r]-vec[l-1]<<'\n';
        }
        else
        {
            cout<<vec2[r]-vec[l-1]<<'\n';
        }
    }
    

    
    
    
}