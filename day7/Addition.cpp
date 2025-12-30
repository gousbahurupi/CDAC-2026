#include <iostream>
using namespace std;

float Addition(int a, int b, int c, float d)
{
    return a + b + c + d;
}

float Addition(int a, int b, float c, float d)
{
    return a + b + c + d;
}

float Addition(int a, float b, float c, float d)
{
    return a + b + c + d;
}

int Addition(int a, int b, int c, int d)
{
    return a + b + c + d;
}

float Addition(float a, float b, float c, float d)
{
    return a + b + c + d;
}

float Addition(char ch, float a, float b, float c)
{
    return ch + a + b + c;
}

int main()
{
    int a, b, c, d;
    float x, y, z, w;
    char ch;

    cout << "Enter 3 integers and 1 float: ";
    cin >> a >> b >> c >> x;
    cout << Addition(a, b, c, x) << endl;

    cout << "Enter 2 integers and 2 floats: ";
    cin >> a >> b >> x >> y;
    cout << Addition(a, b, x, y) << endl;

    cout << "Enter 1 integer and 3 floats: ";
    cin >> a >> x >> y >> z;
    cout << Addition(a, x, y, z) << endl;

    cout << "Enter 4 integers: ";
    cin >> a >> b >> c >> d;
    cout << Addition(a, b, c, d) << endl;

    cout << "Enter 4 floats: ";
    cin >> x >> y >> z >> w;
    cout << Addition(x, y, z, w) << endl;

    cout << "Enter 1 character and 3 floats: ";
    cin >> ch >> x >> y >> z;
    cout << Addition(ch, x, y, z) << endl;

    return 0;
}
