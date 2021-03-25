#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	int s = 0;
	int pos;
	do
	{
		pos = a.find(b);
		if (pos >= 0)
		{
			s++;
			a.erase(pos, b.length());
		}
	} while (pos >= 0);
	cout << s;
	return 0;
}