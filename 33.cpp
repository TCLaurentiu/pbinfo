#include <iostream>
#include <fstream>
using namespace std;
ifstream f("nume.in");
ofstream o("nume.out");
int main()
{
    int a, b;
    f >> a >> b;
    for (int i = (a % 2 == 0 ? a : a + 1), j = 1; i <= b && i % 2 == 0; i += 2, j++)
    {
        if (j == 6)
        {   
            o << "\n";
            j = 0;
        }
        else
            o << i << " ";
    }
}
