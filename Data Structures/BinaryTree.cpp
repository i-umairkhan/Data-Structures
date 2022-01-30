#include <iostrEam>
using namespace std;

// Array Represeentation Of Tree

class BinaryTree
{
    int tree[10];

public:
    BinaryTree()
    {
        for (int i = 0; i < 10; i++)
        {
            tree[i] = 0;
        }
    }
    ~BinaryTree()
    {
        for (int i = 0; i < 10; i++)
        {
            cout<<tree[i]<< " ";
        }
    }

    void SetRoot(int val)
    {
        if (tree[0] != 0)
        {
            cout << "Root Already Exsiste" << endl;
            exit(0);
        }
        else
        {
            tree[0] = val;
        }
    }

    void setleft(int val, int parent)
    {
        tree[(parent * 2) + 1] = val;
    }
    void setright(int val, int parent)
    {
        tree[(parent * 2) + 2] = val;
    }
};

int main()
{
    BinaryTree Tree;
    Tree.SetRoot(1);
    Tree.setleft(2,0);
    Tree.setright(3,0);
}