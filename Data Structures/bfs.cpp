#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Graph representation in Adjacancy matrix
    int a[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}};
    queue<int> que;
    int node;
    int i = 0;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    cout << i;
    visited[i] = 1;
    que.push(i);
    while (!que.empty())
    {
        int node = que.front();
        que.pop();
        for (int j = 0; j < 7; j++)
        {
            if (a[node][j] == 1 && visited[j] == 0)
            {
                cout << j;
                visited[j] = 1;
                que.push(j);
            }
        }
    }
}