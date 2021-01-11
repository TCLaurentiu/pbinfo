#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numar.in");
ofstream o("numar.out");
int main()
{
    int a, b, sum = 0, aux;
    f >> a >> b;
    for (int i = a; i <= b; i++)
    {

        aux = i;
        sum = 0;
        // construirea sumei cifrelor
        while (aux)
        {
            sum += (aux % 10);
            aux /= 10;
        }

        // verificarea primalitatii
        int j = 2;
        for (; j < sum / 2 + 1; j++)
            if (sum % j == 0)
                break;
        if (j == sum / 2 + 1)
            o << i << '\n';

        if (sum == 2)
            o << i << '\n';
    }
    return 0;
}
