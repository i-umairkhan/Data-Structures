#include <iostream>
using namespace std;

class priortiy
{
    int pq[5][5];
    int rear[5];
    int front[5];

public:
    priortiy()
    {
        for (int i = 0; i < 5; i++)
        {
            rear[i] = front[i] = -1;
            for (int j = 0; j < 5; j++)
            {
                pq[i][j] = 0;
            }
        }
    }
    int isempty(int p) const
    {
        return (rear[p] == front[p] == -1);
    }
    int isfull(int p) const
    {
        return (rear[p] == 4);
    }
    void insert(int p, int item)
    {
        if (isfull(p))
        {
            cout << "Overflow at Priority : " << p << endl;
            exit(1);
        }
        else
        {
            pq[p][++rear[p]] = item;
        }
    }
    int delet(int p, int &item)
    {
        if (isempty(p))
        {
            cout << "Uverflow at Prioority : " << p << endl;
            exit(1);
        }
        else
        {
            return item = pq[p][++front[p]];
        }
    }
    void delet_all(int &item)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << delet(i, item) << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    priortiy queue;
    int output;
    queue.insert(0, 1);
    queue.insert(3, 1);
    queue.insert(0, 2);
    queue.insert(4, 1);
    queue.insert(1, 3);
    queue.delet_all(output);
}