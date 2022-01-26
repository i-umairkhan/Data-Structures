#include <iostream>
#include <string>
using namespace std;

class house
{
    char owner[20];
    char address[20];
    int bedrooms;
    float price;

public:
    void input()
    {
        cout << "Enter Owner: ";
        cin >> owner;
        cout << "Enter Address: ";
        cin >> address;
        cout << "Enter Bedrooms: ";
        cin >> bedrooms;
        cout << "Enter Price: ";
        cin >> price;
    }
    void show()
    {
        cout << "Owner: " << owner << endl;
        cout << "Address: " << address << endl;
        cout << "Bedrooms: " << bedrooms << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    house avalible[100];
    string yn;
    for (int i = 0; i < 100; i++)
    {
        avalible[i].input();
        cout << "ADD ANOTHER HOUSE y/n :";
        cin >> yn;
        if (yn == "n")
        {
            avalible[i].show();
            break;
        }
        else
        {
            avalible[i].show();
        }
    }
    cout << "House Class" << endl;
    return 0;
}