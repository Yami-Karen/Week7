#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	int a = 0, b = 0, i, j;
	while (a < 100 && b < 100)
	{
		i = rand() % 6 + 1;
		j = rand() % 6 + 1;
		a += i;
		b += j;
		cout << "Nguoi choi 1: " << i << "       " << "Tong nguoi 1: " << a << endl;
		cout << "Nguoi choi 2: " << j << "       " << "Tong nguoi 2: " << b << endl;
	}
	if (a >= 100)
	{
		if (b < 100) cout << "Nguoi 1 thang";
		else cout << "Hoa";
	}
	else cout << "Nguoi 2 thang";
	return 0;
}