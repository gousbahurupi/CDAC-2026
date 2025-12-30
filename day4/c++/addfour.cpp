#include<iostream>
#include<iomanip>
using namespace std;
float add(int a,int b,int c=0,int d=0){
    return a+b+c+d;
}
int main(){
    cout<<"*******************Addition*******************"<<endl;
    cout<<"Addition of 10 & 20 numbers: "<<add(10,20)<<endl;
    cout<<"Addition of 10 , 20 & 30 numbers: "<<add(10,20,30)<<endl;
}