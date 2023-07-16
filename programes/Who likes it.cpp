
#include <iostream>
#include <vector>
#include <string>
using namespace std;
string likes(const vector<string>& names);
int main()
{
    string names[10];
    
     int x;
     char y;
     cin >> x;
     
     
    for (int i = 0; i <x ; i++)
    {
        
        
            cin >> names[i];
        
    }
    y =(x- 2)+'0';
    
    
    
    
    if (names[0] =="")
    {
        names[0] = "no one likes this";
    }
    else if ( x == 1)
    {
        names[x + 1] = " likes this";
    }
    else if(x == 2 )
    {
        names[1] = " and " + names[1] + " like this";
    }
    else if (x == 3)
    {
        names[1] = ", " + names[1] + " and ";
        names[2] = names[2] + " like this";
    }
    else
    {
        names[1] = ", " + names[1] + " and " + y + " others like this";

    }
    for (int i = 0; i < 2; i++)
    {
        cout << names[i];
    }
    

    
    
}


