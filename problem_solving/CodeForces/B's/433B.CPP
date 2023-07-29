#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;

int main()
{
    FIO;
    int n;
    cin >> n;
    vector<long long>arr(n+1);
    vector<long long>vec;
    vector<long long>arr2(n + 1);
    long long x;
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        vec.push_back(x);
        arr[i] = arr[i - 1] + x;
    }
    multiset <long long>st;
    for (int z : vec)
    {
        st.insert(z);
    }
    auto it = st.begin();
    for (int i = 1; i <= n; i++)
    {
        arr2[i] = arr2[i - 1] + *it;
        it++;
    }
    int m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << arr[r] - arr[l - 1] << '\n';
        }
        else
        {   
            cout << arr2[r] - arr2[l - 1] << '\n';
        }
    }
}

//  2 2 4 6 7 7 