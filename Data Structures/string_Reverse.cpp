#include <iostream>
#include <string>
using namespace std;

#define max_item 500
typedef char itemtype;

class stack
{
    int top;
    itemtype items[max_item];

public:
    stack()
    {
        top = -1;
    }
    int isempty()
    {
        return (top == -1);
    }
    int isfull()
    {
        return (top == max_item - 1);
    }
    void push(itemtype item)
    {
        if (isfull())
        {
            cout << "stack overflow" << endl;
            exit(1);
        }
        top++;
        items[top] = item;
    }
    void pop(itemtype &item)
    {
        if (isempty())
        {
            cout << "stack underflow" << endl;
            exit(1);
        }
        item = items[top];
        top--;
    }
};

int main()
{
    char str[max_item] = " A B C 1 2 3";
    char get[max_item];
    stack s;
    for (int i = 0; i < max_item; i++)
    {
        s.push(str[i]);
        cout << str[i];
    }
    cout << endl;
    cout << "Reversed String : " << endl;
    for (int i = 0; i < max_item; i++)
    {
        s.pop(get[i]);
        cout << get[i];
    }
    return 0;
}