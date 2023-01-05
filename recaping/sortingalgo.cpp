#include <bits/stdc++.h>
#include <string>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e5+5;
const ll mod = 1e9+7;

void bubble (vector<int>&vec)
{
    int n=vec.size();
    for(int i=0 ; i<n ; i++ )
    {
        for( int j=0 ; j<n-1 ; j++ )
        {
            if(vec[j]>vec[j+1])
            swap(vec[j],vec[j+1]);
        }
    }
}


void selc(vector <int>&vec)
{
    int n=vec.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(vec[i]>vec[j])
            swap(vec[i],vec[j]);
        }
    }
}


void inser(vector <int>& vec)
{
    int n=vec.size();
    for(int i=1; i<n ;i++ )
    {
        int cur=vec[i],j=i-1;
        while (j>=0&&vec[j]>cur)
        {
            //we can swap here and delete the line number 49
            vec[j+1]=vec[j];
            j--;
        }
        vec[j+1]=cur;
    }
}

void cntsort(vector <int>& vec)
{
    int shift = *min_element(vec.begin(),vec.end());
    for(int&z:vec)
    {
        z+=shift;
    }
    int mx=*max_element(vec.begin(),vec.end());
    vector <int> freq(mx+1,0);
    for(int z:vec)
    {
        freq[z]++;
    }
    int idx=0;
    for(int i=0;i<=mx;i++)
    {
        while(freq[i]--)
        {
            vec[idx]=i-shift;
            idx++;
        }
    }
}

void merge_vec(int l,int md,int r, vector <int>& vec)
{
    vector <int> L,R;
    for(int i=l ; i<=md ; i++ ) L.push_back(vec[i]);
    for(int i=md+1 ; i<=r ; i++ ) R.push_back(vec[i]);
    L.push_back(INT_MAX);
    R.push_back(INT_MAX);

    int pl=0,pr=0;
    for(int i=l ; i<=r ; i++)
    {
        if(L[pl]<=R[pr])vec[i]=L[pl++];
        else vec[i]=R[pr++];
    }
}

void mergeSort(int l, int r, vector <int>& vec )
{
    if(l>=r)
    return ;
    int md=(l+r)>>1;
    mergeSort(l,md,vec);
    mergeSort(md+1,r,vec);
    merge_vec(l,md,r,vec);
}



int main ()
{
    FIO
    vector <int> vec= { 4 , 3 , 2 , 1 };

    mergeSort(0,(int)vec.size()-1,vec);

    for(int z : vec )
    {
        cout<<z<<' ';
    }





}