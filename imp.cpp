#include <iostream>
using namespace std;
int main()
{
    int v[] = {2, 4, 6, 1}, i = 0, n = sizeof(v) / sizeof(v[0]);
    for (; i < n; i++)
        if (v[i] % 2 == 1)
        {
            cout << "exista elemente impare";
            break;
        }
    if (i == n)
        cout << "nu exista elemente impare";
    return 0;
}
