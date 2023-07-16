
#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    int n,count=0;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "Cube")
            count += 6;
        else if (str == "Tetrahedron")
            count += 4;
        else if (str == "Octahedron")
            count += 8;
        else if (str == "Dodecahedron")
            count += 12;
        else if (str == "Icosahedron")
            count += 20;
    }
    cout << count;



}

