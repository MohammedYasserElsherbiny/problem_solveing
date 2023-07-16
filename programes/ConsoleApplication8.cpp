#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1, str2;
	int x=0;
	cin >> str1 >> str2;
	for (int i = 0; i < str1.length(); i++)
	{
		str1[i] = tolower(str1[i]);
		str2[i] = tolower(str2[i]);
		
	}
	if (str1 == str2)
	{
		x = 0;
	}
	else if (str2 > str1)
	{
		x = -1;
	}
	else if (str2 < str1)
	{
		x = 1;
	}
	
	cout << x;
}

