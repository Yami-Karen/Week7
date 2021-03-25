#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <Windows.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int a = 0, b = 0, i, j;
	while (a < 70 && b < 70)
	{		
			system("cls");
			i = rand() % 100 + 1;
			j = rand() % 100 + 1;
			if (i <= 50) { a += 3; cout << "Rua tien dai (+3) "; }
			else if (i <= 80) { a += 1; cout << "Rua tien ngan (+1) "; }
			else { a -= 6; cout << "Rua truot (-6) "; }
			if (a < 0) a = 0;
			cout << setw(18) << "Tong rua: " << a << endl;			
			if (j <= 20) { b += 0; cout << "Tho ngu (+0) "; }
			else if (j <= 40) { b += 9; cout << "Tho tien dai (+9) "; }
			else if (j <= 50) { b -= 12; cout << "Tho truot dai (-12)"; }
			else if (j <= 80) { b += 1; cout << "Tho tien ngan (+1)"; }
			else { j -= 2; cout << "Tho truot ngan (-2)"; }
			if (b < 0) b = 0;
			cout << setw(19) << "Tong tho: " << b << endl;
			cout << "Start: ";
			cout << setw(a + 7) << "R";
			cout << setw(70 - a) << "Finish\n";
			cout << setw(b + 7) << "T" << endl;
			Sleep(100);
	}
	if (a >= 70)
	{
		if (b < 70) cout << "Rua thang";
		else cout << "Hoa";
	}
	else cout << "Tho thang";
	return 0;
	//Việc sử dụng con trỏ là không cần thiết
}