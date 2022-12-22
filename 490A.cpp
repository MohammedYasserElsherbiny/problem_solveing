#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;







int main ()
{
    FIO
    
    int teams,gift,arr[4][5001],cnt[4]={0},n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>gift;
        cnt[gift]++;
        arr[gift][cnt[gift]]=i;
    }
    teams=min(cnt[1],min(cnt[2],cnt[3]));
    cout<<teams<<'\n';
    for(int i=1;i<=teams;i++)
    {
        cout<<arr[1][i]<<' '<<arr[2][i]<<' '<<arr[3][i]<<'\n';
    }
   
   
    
   
    
}