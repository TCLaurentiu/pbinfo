#include <iostream>
using namespace std;
int main()
{
	int x[] = {9, 4, 3, 8, 5, 1, 6, 2, 7, 10}, n = 10, y[10], min, mpoz;

	for (int i = 0; i < n; i++)
	{
		min = x[i];
		mpoz = i;
		for (int j = i; j < n; j++)
			if (x[j] < min)
			{
				min = x[j];
				mpoz = j;
			}
		y[i] = mpoz + 1;
	}

	for (int i = 0; i < n; i++)
		cout << y[i] << " ";
}
