#include <iostream>
using namespace std;

class Box
{
public:
    float volume(float length, float width = 4.05f, float height = 5.06f)
    {
        return length * width * height;
    }
};

int main()
{
    Box b;
    cout << "Volume is: " << b.volume(10) << endl;
    return 0;
}
