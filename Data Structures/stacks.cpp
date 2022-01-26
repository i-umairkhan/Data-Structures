#include <iostream>
using namespace std;

#define max_item 100
typedef int itemtype;
class stack
{
private:
    int top;
    itemtype items[max_item];

public:
    stack();
    int isfull();
    int isempty();
    void push(itemtype);
    void pop(itemtype &);
};

stack::stack()
{
    top = -1;
}
int stack::isempty()
{
    return (top == -1);
}
int stack::isfull()
{
    return (top == max_item - 1);
}
void stack::push(itemtype newitem)
{
    if (isfull)
    {
        cout << "Stack Overflow" << endl;
        exit(1);
    }
    top++;
    items[top] = newitem;
}
void stack::pop(itemtype &item)
{
    item = items[top];
    top--;
}
int main()
{

    return 0;
}