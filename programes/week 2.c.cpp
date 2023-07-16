#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    int count = 0;
    stack <char> stk;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ')' && stk.empty())
        {
            continue;
        }
        if (str[i] == '(')
        {
            stk.push(str[i]);
        }
        else if (str[i] == ')')
        {
            count += 2;
            stk.pop();
        }
    }
    if (count == str.length())
        cout << "Yes";
    else
        cout << "No";
}
