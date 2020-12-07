#include <iostream>
using namespace std;
int main()
{
	int n, x[100], p;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> x[i];
	cin >> p;
	p--;
	for (int i = 0; i < n; i++)
	{
		if (i < p && 2 * p - i < n)
		{
			x[i] += x[2 * p - i];
			x[2 * p - i] = 0;
		}
	}

	int max = x[0];
	for (int i = 1; i < n; i++)
		if (x[i] > max)
			max = x[i];
	for (int i = 0; i < n; i++)
		if (x[i] == max)
			cout << i + 1 << " ";
}
