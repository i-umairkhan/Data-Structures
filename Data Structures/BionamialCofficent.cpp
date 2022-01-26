#include <iostream>
using namespace std;

int bionomial(int n, int k)
{
    if (n == k)
    {
        return 1;
    }
    else if (k == 0)
    {
        return 1;
    }
    else if (0 < k < n && n > 1)
    {
        return bionomial(n - 1, k - 1) + bionomial(n - 1, k);
    }
}

int main()
{
    cout << bionomial(10, 2) << endl;
    return 0;
}