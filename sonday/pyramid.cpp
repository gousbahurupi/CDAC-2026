#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"Enter no:";
    cin >> N;

    int num = 1;

    for (int i = 1; i <= N; i++) {
        for(int k=0;k<N-i;k++)
            cout<<" ";
        for (int j = 1; j <= i; j++) {
            cout << num<<" ";
            num++;
            if (num == 10)
                num = 0;
        }
        cout << endl;
    }
    return 0;
}