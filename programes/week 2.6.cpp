#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main()
{   
	string str[100005];
	int x[100005];
	int q;
	stack <int> stk;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> str[i];
		if (str[i] == "push")
			cin >> x[i];
	}
	for (int i = 0; i < q; i++)
	{
		if (str[i] == "push")
		{
			stk.push(x[i]);
		}
		else if (str[i] == "pop")
		{
			stk.pop();
		}
		else if (str[i] == "top")
		{
			cout << stk.top()<<endl;
		}
	}


}

