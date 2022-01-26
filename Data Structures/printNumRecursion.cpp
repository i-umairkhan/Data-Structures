#include <iostream>
using namespace std;

int print(int n)
{
    if (n == 0)
    {
        cout << n << endl;
        return 0;
    }
    else
    {

        cout << n << endl;
        return print(n - 1);
    }
}

int main()
{
    int num;
    cout << "Enter a Number : " << endl;
    cin >> num;
    print(num);
    return 0;
}