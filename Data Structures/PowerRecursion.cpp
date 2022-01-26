#include <iostream>
using namespace std;

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return power(x, n - 1) * x;
}

int main()
{
    for (int i = 0; i <= 20; i++)
    {
        cout << "2 ^ " << i << " = " << power(2, i) << endl;
    }
    return 0;
}