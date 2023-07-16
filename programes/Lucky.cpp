
#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    int t, n = 0, m = 0;
    cin >> t;
    int* p = new int[t];
    string str;
    for (int i = 0; i < t; i++)
    {
        cin >> str;
        n = str[0] + str[1] + str[2];
        m = str[3] + str[4] + str[5];
        if (n == m)
            p[i] = 1;
        else
            p[i] = 0;
    }
    for (int i = 0; i < t; i++)
    {
        if (p[i] == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
