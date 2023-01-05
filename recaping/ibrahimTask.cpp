#include <iostream>
#include <string>

using namespace std;

class see_taxes {
public: see_taxes() {

    int b;
    cout << "enter a balance : " << endl;
    cin >> b;
    if (b <= 50000)
    {
        cout << "\ntaxes for this account is : " << (b * 0.10) << endl;
    }
    else if (b > 50000)
    {
        cout << "\ntaxes for this account is : " << (b * 0.15) << endl;
    }
    else if (b == 0)
    {
        cout << "no taxes for this account :)";
    }

    }};

class end {
public: end() {

    cout << "\n----thanks----" << endl;

}};

class out:public see_taxes,public end{};

int main()
{
    out obj;
}