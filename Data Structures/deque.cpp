#include <iostream>
using namespace std;
#define max 10
template <class itemtype>
class dequeu
{
    int front;
    int rear;
    int count;
    itemtype items[max];

public:
    dequeu()
    {
        front = rear = -1;
        count = 0;
    }
    int isfull()
    {
        return count == max;
    }
    int isempty()
    {
        return (rear == -1 && front == -1);
    }
    void inser_front(itemtype item) // Insrting Element From Front ---
    {
        if (isfull())
        {
            cout << "OverFlow" << endl;
            exit(1);
        }
        if (front == -1) // Insertion of first element
        {
            front = 0;
            rear = 0;
        }
        else if (front == 0) // Wrap Around
        {
            front = max - 1;
        }
        else
        {
            front = front - 1;
        }
        items[front] = item;
        count++;
    }
    void insert_rear(itemtype item) // Inserting Element From Rear---
    {
        if (isfull())
        {
            cout << "Overflow" << endl;
            exit(1);
        }
        if (rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear == max - 1)
        {
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
        items[rear] = item;
        count++;
    }
    void delet_Front(itemtype &item) // Deletion From Front
    {
        if (isempty())
        {
            cout << "UnderFlow" << endl;
            exit(1);
        }
        item = items[front];
        count--;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == max - 1)
        {
            front = 0;
        }
        else
        {
            front = front + 1;
        }
    }
    void delet_rear(itemtype &item) //Deletion From Rear
    {
        if (isempty())
        {
            cout << "Under fLOW" << endl;
            exit(1);
        }
        item = items[rear];
        count--;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (rear = 0)
        {
            rear = max - 1;
        }
        else
        {
            rear = rear - 1;
        }
    }
};

int main()
{
    dequeu<int> que;
    for (int i = 0; i < 10; i++)
    {
        que.inser_front(i);
    }
    for (int i = 0; i < 10; i++)
    {
        que.delet_Front(i);
    }
}