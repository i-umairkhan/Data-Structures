#include <iostream>
#include <stack>
using namespace std;

#define maxvar 5
struct edge
{
    int adj;
    int wight;
};
class graph
{
    struct edge adj[maxvar][maxvar];

public:
    graph()
    {
        for (int i = 0; i < maxvar; i++)
        {
            for (int j = 0; j < maxvar; j++)
            {
                adj[i][j].adj = 0;
                adj[i][j].wight = 0;
            }
        }
    }
    void show()
    {
        for (int i = 0; i < maxvar; i++)
        {
            for (int j = 0; j < maxvar; j++)
            {
                cout << adj[i][j].wight << " ";
            }
            cout << endl;
        }
    }
    void join(int v1, int v2, int wight)
    {
        adj[v1][v2].adj = true;
        adj[v1][v2].wight = wight;
    }
    void remove(int v1, int v2)
    {
        adj[v1][v2].adj = false;
        adj[v1][v2].wight = 0;
    }
    bool adjesent(int v1, int v2)
    {
        return adj[v1][v2].adj ? true : false;
    }
};
int main()
{
    graph a;
    a.join(0, 1, 2);
}