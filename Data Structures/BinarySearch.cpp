#include <iostream>
using namespace std;

int search(int arr[], int size, int val)
{
    int first = 0;
    int last = size - 1;
    int mid;
    while (first <= last)
    {
        mid = first + last / 2;
        if (val == arr[mid])
            return mid;
        if (val < arr[mid])
        {
            last = mid - 1;
        }
        else
            first = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1,
                 2,
                 3,
                 4,
                 5,
                 6,
                 7,
                 8,
                 9};
    cout << search(arr, 9, 4);
}