#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (true)
	{
		string a;
		getline(cin, a);

		if (a == ".") break;
		stack<char> s;
		bool isBalanced = true;
		
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] == '(' || a[i] == '[')
			{
				s.push(a[i]);
			}
			else if (a[i] == ')')
			{
				if (!s.empty() && s.top() == '(')
				{
					s.pop();
				}
				else
				{
					isBalanced = false;
					break;
				}
			}
			else if (a[i] == ']')
			{
				if (!s.empty() && s.top() == '[')
				{
					s.pop();
				}
				else
				{
					isBalanced = false;
					break;
				}
			}
		}
		if (isBalanced && s.empty())
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}
}