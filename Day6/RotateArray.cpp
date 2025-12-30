#include <iostream>
#include <algorithm> // for swap
#include <vector>
using namespace std;
void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotate_array(int arr[], int n, int k) {
    if (n == 0) return;
    
    k = k % n;
    if (k == 0) return;

    reverse(arr, 0, n - k - 1);

    reverse(arr, n - k, n - 1);

    reverse(arr, 0, n - 1);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    cout << "Original array: ";
    printArray(arr, n);

    rotate_array(arr, n, k);

    cout << "Rotated array (k=" << k << "): ";
    printArray(arr, n);

    return 0;
}