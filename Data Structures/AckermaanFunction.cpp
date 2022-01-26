#include <iostream>
using namespace std;

int ackermaan(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if (m > 0 && n == 0)
    {
        return ackermaan(m - 1, 1);
    }
    else if (m > 0 && n > 0)
    {
        return ackermaan(m - 1, ackermaan(m, n - 1));
    }
}

int main()
{
    cout << ackermaan(3, 4) << endl;
    return 0;
}