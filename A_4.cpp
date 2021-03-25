#include <iostream>
#include <algorithm>
using namespace std;
int find_(int* f, int s, int e,int k)
{
	if (f[(s + e) / 2] == k) return (s + e) / 2;
	else if ((s + e)/2 == s || (s + e)/2 == e) return 0;
	else if (f[(s + e) / 2] > k) find_(f, s, (s + e) / 2, k);
	else if (f[(s + e) / 2] < k) find_(f, (s + e) / 2, e, k);
}
int main()
{
	int n;
	cin >> n;
	int *f = new int[n + 1];
	for (int i = 0; i < n; i++) cin >> f[i];
	sort(f, f + n);
	for (int i = 0; i < n; i++) cout << f[i] << " ";
	cout << endl;
	int k;
	cin >> k;
	if (k > f[n - 1] || k < f[0])
	{
		cout << "Not found";
		return 1;
	}
	int pos = find_(f, 0, n - 1, k);
	if (pos == 0) cout << "Not found";
	else cout << pos + 1;
	return 0;
}