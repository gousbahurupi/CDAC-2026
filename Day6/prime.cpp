#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num){
    int rnum=sqrt(num);
    if(num>3){
        for(int i=2;i<rnum;i++){
            if(num%i==0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    if(isPrime(num)){
        cout<<"Entered number is prime!";
    }else{
        cout<<"Entered Number is not prime!";
    }
}