#include <iostream>
using namespace std;

inline bool is_Even(int num)
{
    return (num % 2 == 0);
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (is_Even(number))
    {
        cout << number << " is Even." << endl;
    }
    else
    {
        cout << number << " is Odd." << endl;
    }
    return 0;
}
