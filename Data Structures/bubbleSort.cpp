#include <iostream>
using namespace std;
int main()
{
    int n =10;
    int arr[n] = {3, 5, 7, 1, 9, 2, 4, 8, 1, 2};
    int hold,i,j;
    int Switched = 1;
    for (i = 0; i < n&&Switched == 1; i++)
    {
        Switched == 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                hold = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = hold;
                 Switched == 1;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}
