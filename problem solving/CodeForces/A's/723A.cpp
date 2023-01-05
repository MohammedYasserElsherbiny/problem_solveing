#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    int n,m,l;
    cin>>n>>m>>l;
    vector<int> vec(3);
    vec[0]=n;
    vec[1]=m;
    vec[2]=l;
    sort(vec.begin(),vec.end());
    int sum=0;
    sum+=abs(vec[0]-vec[1]);
    sum+=abs(vec[2]-vec[1]);
    cout<<sum;

}