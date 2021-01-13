#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream o("date.out");
int main()
{
    int a, b;
    bool ok;
    f >> a >> b;

    for (int i = a; i <= b; i++)
    {
        ok = 1;
        for (int j = 2; j <= i / 2 + 1; j++)
        {
            if (i % j == 0)
                ok = 0;
        }
        if (i == 2 || ok)
            o << i << " ";
    }

    o << '\n';

    for (int i = a; i <= b; i++)
        if (i % 10 == 5)
            o << i << " ";
}
