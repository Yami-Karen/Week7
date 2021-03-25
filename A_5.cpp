#include <iostream>
using namespace std;
char* weird_string() {
	char c[] = "123456";
	return c;
}
int main()
{
	char* c = new char[10];
	c = weird_string();
	cout << c;
	return 0;
	//output không như mong muốn do truy cập không hợp lệ
}