#include <iostream>
using namespace std;

#define max 10

class dequeue
{
    int LeftFront, LeftRear, LeftCount;
    int RightFront, RightRear, RightCount;
    int items[max];

public:
    dequeue()
    {
        LeftFront = LeftRear = LeftCount = RightCount = 0;
        RightFront = RightRear = max - 1;
    }
    int leftempty()
    {
        // To cheak If left is empty
        return (LeftCount == 0);
    }
    int rightempty()
    {
        // To cheak if right is empty
        return (RightCount == max - 1);
    }
    int isfull()
    {
        //to Cheak if no items from inserted
        return ((LeftCount + RightCount == max));
    }
    void insertLeft(int item)
    {
        if (isfull())
        {
            cout << "Left Overflow" << endl;
            exit(1);
        }
        else
        {
            items[LeftRear] = item;
            LeftRear++;
            LeftCount++;
        }
    }
    void insertRight(int item)
    {
        if (isfull())
        {
            cout << "Right Overflow" << endl;
            exit(1);
        }
        else
        {
            items[RightRear] = item;
            RightRear--;
            RightCount++;
        }
    }
    void deletLeft(int &item)
    {
        if (leftempty())
        {
            cout << "Left UnderFlow" << endl;
            exit(1);
        }
        item = items[LeftFront];
        LeftFront++;
        LeftCount--;
    }
    void deletRight(int &item)
    {
        if (rightempty())
        {
            cout << "Right UnderFlow" << endl;
            exit(1);
        }
        item = items[RightFront];
        RightFront--;
        RightCount--;
    }
};

int main()
{
    dequeue numbers;
    int output;
    numbers.insertLeft(0);
    numbers.insertLeft(0);
    numbers.insertLeft(0);
    numbers.insertLeft(0);
    numbers.insertLeft(0);
    numbers.insertRight(1);
    numbers.insertRight(1);
    numbers.insertRight(1);
    numbers.insertRight(1);
    numbers.insertRight(1);
    for (int i = 0; i < 10; i++)
    {
        numbers.deletRight(output);
        cout << output << endl;
    }
    return 0;
}