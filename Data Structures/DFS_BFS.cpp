#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int visited[5] = {0, 0, 0, 0, 0};
class graph
{
public:
    int adj[5][5];
    graph()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                adj[i][j] = 0;
            }
        }
    }
    void join(int v1, int v2)
    {
        adj[v1][v2] = 1;
        adj[v2][v1] = 1;
    }
    void remove(int v1, int v2)
    {
        adj[v1][v2] = 0;
    }

    void dfs(int v)
    {
        cout << v << " ";
        visited[v] = 1;
        for (int j = 0; j < 5; j++)
        {
            if (adj[v][j] == 1 && !visited[j])
            {
                dfs(j);
            }
        }
    }
    void print()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    graph g;
    g.join(0, 3);
    g.join(0, 2);
    g.join(0, 1);
    g.join(1, 2);
    g.join(2, 4);
    g.print();
    g.dfs(1);
}