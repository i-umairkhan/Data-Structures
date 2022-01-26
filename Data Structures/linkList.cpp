#include <iostream>
using namespace std;

template <class itemtype>
class list
{
protected:
    struct node
    {
        itemtype info;
        node *next;
    };
    typedef node *NODEPTR;
    NODEPTR listptr;

public:
    list()
    {
        listptr = 0;
    }
    ~list()
    {
        NODEPTR p, q;
        if (isempty())
        {
            exit(0);
        }
        for (p = listptr, q = p->next; p != 0; p = q, q = p->next)
        {
            delete p;
        }
    }
    void insertAfter(itemtype oldvalue, itemtype newvalue)
    {
        NODEPTR p, q;
        for (p = listptr; p != 0 && p->info != oldvalue; p = p->next)
            ;
        if (p == 0)
        {
            cout << "ERROR : Valur not found" << endl;
            exit(1);
        }
        q = new node;
        q->info = newvalue;
        q->next = p->next;
        p->next = q;
    }
    int isempty()
    {
        return (listptr == 0);
    }
    void push(itemtype value)
    {
        NODEPTR p;
        p = new node;
        p->info = value;
        p->next = listptr;
        listptr = p;
    }
    void deletItem(itemtype oldvalue)
    {
        NODEPTR p, q;
        for (q = 0, p = listptr; p != 0 && p->info != oldvalue; q = p, p = p->next)
            ;
        if (p == 0)
        {
            cout << "Value is not in list" << endl;
            exit(1);
        }
        if (q == 0)
        {
            listptr = p->next;
        }
        else
        {
            q->next = p->next;
        }
        delete p;
    }
    itemtype pop()
    {
        NODEPTR p;
        itemtype x;
        if (isempty())
        {
            cout << "Error List is empty" << endl;
            exit(1);
        }
        p = listptr;
        x = p->info;
        listptr = p->next;
        delete p;
        return x;
    }
};

int main()
{
    list<int> numbers;
    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    numbers.push(4);
    numbers.deletItem(3);
    for (int i = 0; i < 3; i++)
    {
        cout << numbers.pop() << " " << endl;
    }
}