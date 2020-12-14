#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int v[300];
    for (int i = 0; i < m; i++)
        cin >> v[i];

    for (int i = 0; i < m - 1; i++)
    {
        for (int j = m + 1; j > i + 1; j--)
            v[j] = v[j - 1];
        v[i + 1] = v[i] + v[i + 2];
        m++;
        i++;
    }

    for (int i = 0; i < m; i++)
        cout << v[i] << " ";
}
