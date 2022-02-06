#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {3, 5, 7, 1, 9, 2, 4, 8, 1, 2};
    int min, hold;
    for (int i = 0; i < 9; i++)
    {
        min = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
                hold = arr[i];
                arr[i] = arr[min];
                arr[min] = hold;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}
