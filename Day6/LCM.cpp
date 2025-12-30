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

int lcm(int a, int b){
    int g= gcd(a,b);
    return a*b/g;
}

int main(){
    int a,b;
    cout<<"Enter Two numbers: ";
    cin>>a>>b;
    cout<<"The LCM of given numbers is: "<<lcm(a,b);
}