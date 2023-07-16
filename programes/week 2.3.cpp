#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string str[1000];
    int x[1000];
    deque <int> dq;
    long long  q;
    cin >> q;
    for (long long i = 0; i < q; i++)
    {
        cin >> str[i];
        if (str[i] == "toFront")
            cin >> x[i];
        else if (str[i] == "push_back")
            cin >> x[i];
       
    }
    for (int i = 0; i < q; i++)
    {      
        if (str[i] == "toFront")
        {
            
            dq.push_front(x[i]);
            continue;
        }
        else if (str[i] == "front")
        {
            if (!dq.empty())
            {
                cout << dq[0] << endl;;
                dq.pop_front();
            }
            else
                cout << "No job for Wafaa?"<<endl;
        }
        else if (str[i] == "back")
        {
            if (!dq.empty())
            {
                cout << dq[dq.size() - 1] << endl;;
                dq.pop_back();
            }
            else
                cout << "No job for Wafaa?"<<endl;
        }
        else if (str[i] == "reverse")
        {
            reverse(dq.begin(), dq.end());
        }
        else if (str[i] == "push_back")
        dq.push_back(x[i]);
        

    }


}

