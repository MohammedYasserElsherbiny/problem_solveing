#include <string>
#include <iostream>
using namespace std;
int main()
{
    char ch1[100], ch2[100];
    string str[100],temp1,temp2;
    int x;
    int b[100],count;
    cin >> count;
    
    for (int l = 0; l < count; l++)
    {
        for (int i = 0; i < str[l].length(); i++)
        {

            cin >> str[l];
            b[l] = str[l].length();

            x = b[l] - 1;
            if (l == 0)
            {

                temp1 = str[l];
            }
            else if (l == b[l] - 1)
            {

                temp2 = str[l];

            }
        }
        
    }

    for (int k = 0; k < count; k++)
    {

        if (b[k] >= 10)
        {
            cout << temp1[k] << b[k] - 2 << temp2[x] << endl;
        }
        else
            cout << str[k] << endl;
    }

}

