#include <iostream>
using namespace std;
#define maxqueue 10
typedef int itemtype;
class queue
{
    int front, rear, count;
    itemtype items[maxqueue];

public:
    queue()
    {
        front = rear = count = 0;
    }
    int isempty()
    {
        return (count == 0);
    }
    int isfull()
    {
        return (count == maxqueue);
    }
    void insert(itemtype item)
    {
        if (isfull())
        {
            cout << "OVERFLOW" << endl;
            exit(1);
        }
        items[rear] = item;
        rear++;
        count++;
    }
    void remove(itemtype &item)
    {
        if (isempty())
        {
            cout << "UNDERFLOW" << endl;
            exit(1);
        }
        item = items[front];
        front++;
        count--;
    }
};

int main()
{
    queue numbers;
    int output;
    for (int i = 0; i < 10; i++)
    {
        numbers.insert(i);
    }
    for (int i = 0; i < 10; i++)
    {
        numbers.remove(output);
        cout << output << endl;
    }
    return 0;
}