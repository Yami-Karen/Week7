#include <iostream>
using namespace std;
void check(int f[])
{
    for (int i = 0;i < 10;i++) cout << &f[i];
}
int main()
{
    int f[100]
    for (int i = 0;i < 10;i++) cout << &f[i];
    cout << endl;
    check(f);
    return 0;
}