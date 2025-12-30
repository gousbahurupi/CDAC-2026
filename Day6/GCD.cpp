#include <iostream>
#include <string.h>
using namespace std;
int gcd(int a, int b){
    int x=a%b;
    if (x==0){
        return b;
    }
    a=b;
    b=x;
    return gcd(a,b);
}

int main(){
    int a,b;
    cout<<"Enter Two numbers: ";
    cin>>a>>b;
    cout<<"The GCD of given numbers is: "<<gcd(a,b);
}

