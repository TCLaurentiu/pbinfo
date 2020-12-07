	#include <iostream>
	using namespace std;
	int main()
	{
		int m, n, v[100], v1[100];
		bool found = 0;
		cin >> m >> n;
		for (int i = 0; i < m; i++)
			cin >> v[i];
		for (int i = 0; i < n; i++)
			cin >> v1[i];
		for (int i = 0; i < m; i++)
		{
			found = 0;
			for (int j = 0; j < n && !found; j++)
				if (v1[j] == v[i])
					found = 1;
			if (!found)
				cout << v[i] << " ";
		}
	}
