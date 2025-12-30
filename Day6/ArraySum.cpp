#include <iostream>
using namespace std;

int sum_array_recursive(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    return arr[n - 1] + sum_array_recursive(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int total_sum = sum_array_recursive(arr, n);
    cout << "Sum of array elements: " << total_sum << endl;

    return 0;
}