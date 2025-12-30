

// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
using namespace std;
struct emp{
    int ei;
    float sal;
    string nm;
};
void accept(emp *e){
    cout << "Entar empid: ";
    cin>>(*e).ei;
    cout << "Entar emp name: ";
    cin>>(*e).nm;
    cout << "Entar empsal: ";
    cin>>(*e).sal;
}

void display(const emp e){
    cout << "\nempid: "<<e.ei;
    cout << "\nemp name: "<<e.nm;
    cout << "\nemp sal: "<<e.sal;
}

int main() {
    // Write C++ code here
    struct emp e;
    accept(&e);
    display(e);
    
}