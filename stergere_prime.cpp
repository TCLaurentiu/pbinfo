#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 0 || n == 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 3; i < n / 2 + 1; i++)
        if (n % i == 0) 
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        if (isPrime(v[i]))
        {
            n--;
            for (int j = i; j < n; j++)
                v[j] = v[j + 1];
        }
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}
