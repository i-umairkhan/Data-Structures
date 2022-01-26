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
    NODEPTR last;

public:
    list()
    {
        last = NULL;
    }
    void show()
    {
        NODEPTR p;
        p = last->next;
        while (p != last)
        {
            cout << p->info << endl;
            p = p->next;
        }
    }
    void insert_at_beg(itemtype x)
    {
        NODEPTR p;
        p = new node;
        if (last == NULL)
        {
            p->info = x;
            last = p;
            p->next = last;
        }
        p->info = x;
        p->next = last->next;
        last->next = p;
    }
    void insert_end(itemtype x)
    {
        NODEPTR p;
        p = new node;
        if (last == NULL)
        {
            last = p;
        }
        else
        {
            p->next = last->next;
        }
        p->info = x;
        last->next = p;
        last = p;
    }
    void insert_in_between(itemtype x, itemtype value)
    {
        NODEPTR p, q;
        q = last;
        p = new node;
        while (q->info != x)
        {
            q = q->next;
        }
        p->next = q->next;
        q->next = p;
        p->info = value;
    }
};
int main()
{
    list<int> l;
    l.insert_at_beg(1);
    l.insert_at_beg(2);
    l.insert_at_beg(3);
    l.insert_at_beg(4);
    l.insert_end(5);
    l.insert_in_between(2, 9);
    l.insert_at_beg(0);
    l.insert_end(6);
    l.show();
}