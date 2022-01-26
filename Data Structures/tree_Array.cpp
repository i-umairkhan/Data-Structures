#include <iostream>
using namespace std;

int tree[6];
void set_root(int val)
{

    tree[0] = val;
}
void setLeft(int parent, int val)
{
    tree[(parent * 2) + 1] = val;
}
void setRight(int parent, int val)
{
    tree[(parent * 2) + 2] = val;
}
void printTree()
{
    for (int i = 0; i < 7; i++)
    {
        cout << tree[i] << " ";
    }
}
int main()
{
    set_root(5);
    setLeft(0, 6);
    setRight(0, 0);
    setLeft(1, 2);
    setRight(1, 3);
    setLeft(2, 1);
    setRight(2, 8);
    printTree();
}