#include <iostream>
#include <string>
using namespace std;

template <class itemtype>
class stack
{
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
    int isempty()
    {
        return (top == -1);
    }
    int isfull()
    {
        return (top == maxStack - 1);
    }
    void push(itemtype item)
    {
        if (isfull())
        {
            cout << "Stack Overflow" << endl;
            exit(1);
        }
        top++;
        items[top] = item;
    }
    void pop(itemtype &item)
    {
        if (isempty())
        {
            cout << "Stack Underflow" << endl;
            exit(1);
        }
        item = items[top];
        top--;
    }
    itemtype topElement()
    {
        return (items[top]);
    }
};

int presidence(char op)
{
    if (op == '^')
    {
        return 3;
    }
    else if (op == '*' || op == '/')
    {
        return 2;
    }
    else if (op == '+' || op == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string infixToPrefix(string infix)
{
    stack<char> st;
    string result;
    char p;

    for (int i = 0; i < infix.length(); i++)
    {
        if (infix[i] >= 'a' && infix[i] <= 'z')
        {
            result += infix[i];
        }
        else if (infix[i] == '(')
        {
            st.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (!st.isempty() && st.topElement() != '(')
            {
                result += st.topElement();
                st.pop(p);
            }
            if (!st.isempty())
            {
                st.pop(p);
            }
        }
        else
        {
            while (!st.isempty() && presidence(st.topElement()) > presidence(infix[i]))
            {
                result += st.topElement();
                st.pop(p);
            }
            st.push(infix[i]);
        }
    }
    while (!st.isempty())
    {
        result += st.topElement();
        st.pop(p);
    }
    return result;
}

int main()
{
    string infix;
    stack<char> s;
    cout << "Enter Infix : " << endl;
    cin >> infix;

    cout << "Postfix : " << infixToPrefix(infix) << endl;

    return 0;
}