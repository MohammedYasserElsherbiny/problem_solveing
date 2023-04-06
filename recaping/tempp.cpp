#include <iostream>
#include<vector>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    FIO;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> vec(n), pos(n + 1), ans;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            pos[vec[i]] = i;
        }

        int en = n;
        for (int i = n; i >= 1; i--)
        {
            if (pos[i] >= en)
            {
                continue;
            }
            for (int j = pos[i]; j < en; j++)
            {
                cout << vec[j] << ' ';
            }
            en = pos[i];
        }
        cout << '\n';
    }
}
