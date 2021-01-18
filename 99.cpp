#include <iostream>
#include <fstream>
using namespace std;
ofstream o("numere.out");
int main()
{
    int n, pow = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        pow *= 2;
        for (int j = 1; j < pow; j++)
            o << j << " ";
        o << '\n';
    }
}
