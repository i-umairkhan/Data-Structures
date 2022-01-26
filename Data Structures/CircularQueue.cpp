#include <iostream>
#include <string>
using namespace std;
template <class itemtype>
class queue
{
    int front;
    int rear;
    int maxqueue;
    int count;
    itemtype *items;

public:
    queue()
    {
        front = rear = count = 0;
        maxqueue = 10;
        items = new itemtype[maxqueue];
    }
    queue(int max)
    {
        front = rear = count = 0;
        maxqueue = max;
        items = new itemtype[maxqueue];
    }
    ~queue()
    {
        delete[] items;
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
        else
        {
            items[rear] = item;
            rear = (rear + 1) % maxqueue;
            count++;
        }
    }
    void remove(itemtype &item)
    {
        if (isempty())
        {
            cout << "UnderFlow" << endl;
            exit(1);
        }
        else
        {
            item = items[front];
            front = (front + 1) % maxqueue;
            count--;
        }
    }
};

int main()
{
    queue<string> str;
    string output;

    str.insert("Umair");
    str.insert("ali");
    str.insert("ahmrd");
    str.insert("bilal");
    str.insert("areeb");
    str.insert("hadi");
    str.insert("tallat");
    str.insert("tahir");
    str.insert("khan");
    str.insert("usman");

    for (int i = 0; i < 10; i++)
    {
        str.remove(output);
        cout << output << endl;
    }
    return 0;
}