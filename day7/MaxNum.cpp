#include <iostream>
using namespace std;

class math_operation
{
public:
    int max(int a, int b)
    {
        if (a > b)
            return a;
        else
            return b;
    }

    int max(int a, int b, int c)
    {
        if (a > b && a > c)
            return a;
        else if (b > c)
            return b;
        else
            return c;
    }

    int max(int a, int b, int c, int d)
    {
        int t = max(a, b);
        return max(t, max(c, d));
    }
};

int main()
{
    math_operation m;
    int a, b, c, d;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Max of two: " << m.max(a, b) << endl;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Max of three: " << m.max(a, b, c) << endl;

    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;
    cout << "Max of four: " << m.max(a, b, c, d) << endl;

    return 0;
}
