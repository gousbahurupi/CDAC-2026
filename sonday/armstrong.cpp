#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 500; i++) {
        int n = i;
        int s = 0;

        while (n > 0) {
            int d = n % 10;
            s += d * d * d;
            n /= 10;
        }

        if (s == i) {
            cout << i << " ";
        }
    }
    return 0;
}
