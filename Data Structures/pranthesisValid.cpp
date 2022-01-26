#include <iostream>
#include <string>
using namespace std;

template <class itemtype>
class stack
{
private:
    int top;
    int maxStack;
    itemtype *items;

public:
    stack()
    {
        top = -1;
        maxStack = 500;
        items = new itemtype[500];
    }
    stack(int max)
    {
        top = -1;
        maxStack = max;
        items = new itemtype[max];
    }
    ~stack()
    {
        delete[] items;
    }
    int isEmpty()
    {
        return (top == -1);
    }
    int isFull()
    {
        return (top == maxStack - 1);
    }
    void push(itemtype item)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
            exit(1);
        }
        top++;
        items[top] = item;
    }
    void pop(itemtype &item)
    {
        if (isEmpty())
        {
            cout << "Stack UnderFlow" << endl;
            exit(1);
        }
        item = items[top];
        top--;
    }
};

int main()
{
    string expresion;
    char valid;
    stack<char> s;
    cout << "Enter Expresion You want To validate" << endl;
    cin >> expresion;
    for (int i = 0; i < expresion.length(); i++)
    {
        if (expresion[i] == '(')
        {
            s.push(expresion[i]);
        }
        if (expresion[i] == '{')
        {
            s.push(expresion[i]);
        }
        if (expresion[i] == ')')
        {
            s.pop(valid);
        }
        if (expresion[i] == '}')
        {
            s.pop(valid);
        }
    }
    if (s.isEmpty())
    {
        cout << "Valid Expresion" << endl;
    }
    else
    {
        cout << "Not Valid" << endl;
    }
    return 0;
}