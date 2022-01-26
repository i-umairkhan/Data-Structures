#include <iostream>
using namespace std;
int primecheck(int n, int i)
{
    int count = 0;
    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (n % i == 0)
        {
            count = 1;
        }
        else
        {
            return primecheck(n, i - 1);
        }
    }
}
int main()
{
    int n;
    int check;
    cout << ("ENTER A NUMBER : ");
    cin >> n;
    check = primecheck(n, n / 2);
    if (check == 0)
    {
        cout << ("IT IS NOT A PRIME NUMBER\n");
    }
    else
    {
        cout << ("IT IS A PRIME NUMBER\n");
    }
}