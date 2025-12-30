#include <iostream>
using namespace std;
int find_duplicates(int arr[], int n) {
    if (n <= 1) return 0;
    int duplicate_count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            duplicate_count++;
            while (i < n - 1 && arr[i] == arr[i + 1]) {
                i++;
            }
        }
    }
    return duplicate_count;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int duplicates = find_duplicates(arr, n);
    cout << "Number of duplicate elements: " << duplicates << endl;

    return 0;
}