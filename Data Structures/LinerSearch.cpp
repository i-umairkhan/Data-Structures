// Liner search or wequentioal search is based when array is not sorted
// It gets a values searches than returns index if founf else -1
#include <iostream>
using namespace std;

int search(int arr[], int size, int val)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == val)
            return i;
    }
    return -1;
}

int main()
{
    const int size = 9;
    int arr[size] = {3, 6, 2, 8, 3, 8, 3, 99, 7};
    cout << search(arr, size, 99);
}