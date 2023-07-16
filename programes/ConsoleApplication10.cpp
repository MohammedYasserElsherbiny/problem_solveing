#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,sum=0;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str[1] == '+')
        {
            sum += 1;
        }
        
        if (str[1] == '-')
        {
            sum -= 1;
        }
    }
    cout << sum;
}
