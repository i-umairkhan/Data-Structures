#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
template <class itemtype>
struct treenode
{
    itemtype info;
    treenode<itemtype> *left;
    treenode<itemtype> *right;
};
template <class itemtype>
class treetype
{
public:
    int count = 0;
    treetype();
    ~treetype();
    bool isempty() const;
    bool isfull() const;
    int numberofnodes() const;
    void insertitem(itemtype item);
    void deleteitem(itemtype item);
    void retrieveitem(itemtype &item, bool &found);
    void printtree(ofstream &outfile);
    void printhelper(treenode<itemtype> *ptr, ofstream &outfile);
    void inserthelper(treenode<itemtype> *&ptr, itemtype item);
    void retrievehelper(treenode<itemtype> *ptr, itemtype &item, bool &found);
    void destroyhelper(treenode<itemtype> *ptr);
    void preorder(treenode<itemtype> *ptr);
    void postorder(treenode<itemtype> *ptr);
    void inorder(treenode<itemtype> *ptr);
    void countnodes();

private:
    treenode<itemtype> *root;
};
template <class itemtype>
treetype<itemtype>::treetype()
{
    root = NULL;
}
template <class itemtype>
bool treetype<itemtype>::isempty() const
{
    return (root == NULL);
}
template <class itemtype>
void treetype<itemtype>::retrieveitem(itemtype &item, bool &found)
{
    retrievehelper(root, item, found);
}
template <class itemtype>
void treetype<itemtype>::retrievehelper(treenode<itemtype> *ptr, itemtype &item, bool &found)
{
    if (ptr == NULL)
    {
        found = false;
    }
    else if (item < ptr->info)
    {
        retrievehelper(ptr->left, item, found);
    }
    else if (item > ptr->info)
    {
        retrievehelper(ptr->right, item, found);
    }
    else
    {
        item = ptr->info;
        found = true;
    }
}
template <class itemtype>
void treetype<itemtype>::countnodes()
{
    cout << " Number of nodes in the tree is " << count << endl;
}
template <class itemtype>
void treetype<itemtype>::insertitem(itemtype item)
{
    inserthelper(root, item);
    count++;
}
template <class itemtype>
void treetype<itemtype>::inserthelper(treenode<itemtype> *&ptr, itemtype item)
{
    if (ptr == NULL)
    {
        ptr = new treenode<itemtype>;
        ptr->right = NULL;
        ptr->left = NULL;
        ptr->info = item;
    }
    else if (item < ptr->info)
    {
        inserthelper(ptr->left, item);
    }
    else if (item > ptr->info)
    {
        inserthelper(ptr->right, item);
    }
}
template <class itemtype>
void treetype<itemtype>::printtree(ofstream &outfile)
{
    printhelper(root, outfile);
}
template <class itemtype>
void treetype<itemtype>::printhelper(treenode<itemtype> *ptr, ofstream &outfile)
{
    if (ptr != NULL)
    {
        printhelper(ptr->left, outfile);
        outfile << ptr->info;
        printhelper(ptr->right, outfile);
    }
}
template <class itemtype>
treetype<itemtype>::~treetype()
{
    destroyhelper(root);
}
template <class itemtype>
void treetype<itemtype>::destroyhelper(treenode<itemtype> *ptr)
{
    if (ptr == NULL)
    {
        destroyhelper(ptr->left);
        destroyhelper(ptr->right);
        delete ptr;
    }
}
template <class itemtype>
void treetype<itemtype>::preorder(treenode<itemtype> *ptr)
{
    cout << ptr->info;
    preorder(ptr->left);
    preorder(ptr->right);
}
template <class itemtype>
void treetype<itemtype>::inorder(treenode<itemtype> *ptr)
{
    inorder(ptr->left);
    cout << ptr->info;
    inorder(ptr->right);
}
template <class itemtype>
void treetype<itemtype>::postorder(treenode<itemtype> *ptr)
{
    postorder(ptr->left);
    postorder(ptr->right);
    cout << ptr->info;
}
int main()
{
    treetype<int> tree;
    ofstream out("tree.txt");
    int item = 1;
    bool usman = false;
    for (int loop = 0; loop < 10; loop++)
    {
        tree.insertitem(loop);
        tree.printtree(out);
    }
    tree.retrieveitem(item, usman);
    cout << usman << endl;
    system("pause");
}