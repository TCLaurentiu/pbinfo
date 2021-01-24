#include <iostream>
#include <fstream>
using namespace std;
ifstream f("f1.txt");
ofstream o1("f2.txt");
ofstream o2("f3.txt");
int main()
{
    int n, poz = 0, neg = 0;
    f >> n;
    while (f >> n)
    {
        if (n > 0)
        {
            poz++;
            o1 << n << "\n";
        }
        else if (n < 0)
        {
            neg++;
            o2 << n << "\n";
        }
    }
    o1 << poz;
    o2 << neg;
}
