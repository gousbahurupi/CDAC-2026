#include <iostream>
#include <string.h>
using namespace std;
class Chair
{
private:
    int height, width;
    string color;
    static double price;

public:
    Chair()
    {
        height = 10;
        width = 5;
        price = 1000;
        color = "red";
    }

    Chair(int h, int w, double p, string c)
    {
        height = h;
        width = w;
        price = p;
        color = c;
    }

    void input()
    {
        cout << "\nEnter height: ";
        cin >> height;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter color: ";
        cin >> color;
    }

    static void setPrice(double p)
    {
        Chair::price = p;
    }

    void const display()
    {
        cout << "\nHeight: " << height;
        cout << "\nWidth: " << width;
        cout << "\nPrice: " << price;
        cout << "\nColor: " << color;
    }

    ~Chair()
    {
        cout << "Object Distroied!";
    }
};

double Chair::price = 1000;

int main()
{
    Chair c1;
    cout << "\nC1: ";
    c1.display();
    cout << "\nC1 after user input: ";
    c1.input();
    c1.display();

    Chair c2(20, 10, 2000, "blue");
    cout << "\nC2: ";
    c2.display();
    cout << "\nC2 after setPrice: ";
    c2.setPrice(3000);
    c2.display();

    cout << "\nC1 Afer C2: ";
    c1.display();

    return 0;
}