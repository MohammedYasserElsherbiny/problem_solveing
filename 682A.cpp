#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;


// void solve (int num1,int num2)
// {

//     if(num1>n) return ;
//     if(num2>m) return ;
//     if(mp[temp]||mp[revTemp]) return ;


//     if((num1+num2)%5==0) 
//     {
//         cnt++;
//         mp[temp]=true;
//         mp[revTemp]=true;
//     }

//     solve (num1+1,num2);
//     solve (num1,num2+1);
// }


int main ()
{
    FIO
    ll m,n,cnt=0;
    
    cin>>n>>m;
    vector<ll> vec1(5);
    vector<ll> vec2(5);
    for(int i=1;i<=n;i++)
    {
        vec1[i%5]++;
    }
    for(int i=1;i<=m;i++)
    {
        vec2[i%5]++;
    }
    cout<<vec1[0]*vec2[0]+vec1[1]*vec2[4]+vec1[2]*vec2[3]+vec1[3]*vec2[2]+vec1[4]*vec2[1];

    
    
    return 0;
}